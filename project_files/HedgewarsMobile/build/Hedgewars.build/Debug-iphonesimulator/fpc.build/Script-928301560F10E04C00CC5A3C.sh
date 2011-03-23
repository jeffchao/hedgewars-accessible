#!/bin/sh
# Compile Pascal Sources
# 15sep06,ejo  written.
# 26 April 2007 - Jonas Maebe
#  * support for ppc64 and x86_64
#  * don't run when cleaning (in case running scripts when cleaning is ever fixed by Apple)
#  * split the options in FPC_COMMON_FLAGS (common to all configurations) and FPC_CFG_SPECIFIC_FLAGS (per configuration)
# 4 January 2009 - Jonas Maebe
#  * support for ARM
# 24 October 2009 - Jonas Maebe
#  * don't hardcode 2.3.1 in some cases anymore
# 13 December 2009 (Jonas Maebe)
#  * use new FPC_COMPILER_BINARY_DIR setting to make it easier to change the used FPC version

if [ x"$ACTION" != "xbuild" ]; then
  # in case running scripts during cleaning gets fixed
  exit 0
fi

if test ! -e "$FPC_MAIN_FILE"
then
	echo error: FPC_MAIN_FILE not found \($FPC_MAIN_FILE\)
	exit 2
fi

for variant in $BUILD_VARIANTS
do
	for arch in $ARCHS
	do
		case $arch in
			ppc) fpc_arch=ppc; fpc_rtl=powerpc ;;
			i386) fpc_arch=386; fpc_rtl=i386 ;;
			ppc64) fpc_arch=ppc64; fpc_rtl=powerpc64 ;;
			x86_64) fpc_arch=x64; fpc_rtl=x86_64 ;;
			arm*) fpc_arch=arm; fpc_rtl=arm ;;
			*) continue
		esac

		app_target_temp_dir=$CONFIGURATION_TEMP_DIR/`basename "$PROJECT_TEMP_DIR"`
		out_dir=$app_target_temp_dir/`basename "$DERIVED_SOURCES_DIR"`-$variant/$arch
		fpccompiler="${FPC_COMPILER_BINARY_DIR}/ppc${fpc_arch}"
		if test -e "$fpccompiler"
		then
			fpcversion=`"$fpccompiler" -iV`
			mainunitdir="$FPC_RTL_UNITS_BASE/$fpcversion/units/${fpc_rtl}-darwin/"
			mkdir -p "$out_dir"
			cd "$out_dir"
			echo "Compiling to $out_dir"
			rm -f compilefailed
	
			# delete any ppu files for which the ".s" file was somehow deleted (Xcode does that sometimes in case of errors),
			# so that FPC will recompile the unit
			for file in *.ppu
			do
				asmname=`basename "$file" ppu`s
				if [ ! -f "$asmname" ]; then
					# can fail in case there are no .ppu files, since then it will try to erase the file with name '*.ppu'
					# -> use -f so it won't give an error message
					rm -f "$file"
				fi
			done

			echo $fpccompiler -n -l -viwn -a -s -vbr -FE. $FPC_COMMON_OPTIONS $FPC_SPECIFIC_OPTIONS '\' >ppccmd.sh
			echo -Fi\"`dirname "$FPC_MAIN_FILE"`\" '\' >>ppccmd.sh
			echo -Fu"$mainunitdir/*" -Fu"$mainunitdir/rtl" '\' >>ppccmd.sh
			# allow FPC_UNIT_PATHS to override default search directory
			echo $FPC_UNIT_PATHS '\' >>ppccmd.sh
			echo \"$FPC_MAIN_FILE\" >>ppccmd.sh
			# cat ppccmd.sh

			/bin/sh ppccmd.sh
			if [ $? != 0 ]; then
				touch "$out_dir"/compilefailed
				exit 1
			fi
		else
			touch "$out_dir"/compilefailed
			echo $FPC_MAIN_FILE:1: error: 1: can\'t compile for $arch \(ppc${fpc_arch} not found\)
			exit 2
		fi
	done
done

