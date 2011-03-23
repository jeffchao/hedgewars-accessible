#!/bin/sh
# Build libfpc.a
# 9 July 2006 (Jonas Maebe)
#   * original version
# 15 September 2006 (Erling Johansen)
#   * simplified
# 26 April 2007 (Jonas Maebe)
#  * added support for ppc64/x86_64 (future proofing)
# 4 August 2007 (Jonas Maebe)
#  * call ranlib after ar so the toc of the library is up-to-date
# 3 January 2009 (Jonas Maebe)
#  * support for ARM
# 24 October 2009 (Jonas Maebe)
#  * don't hardcode version 2.3.1 anymore under certain circumstances
#  * use the FPC_RTL_UNITS_BASE setting
# 13 December 2009 (Jonas Maebe)
#  * use new FPC_COMPILER_BINARY_DIR setting to make it easier to change the used FPC version

rm -f "$TARGET_TEMP_DIR"/*.a
narch=

temparchs=`echo $ARCHS|sed -e 's/arm[^\w]*/arm\
/'|sort -u`
for arch in $temparchs
do
	case $arch in
		ppc) fpc_arch=ppc; fpc_rtl=powerpc ;;
		i386) fpc_arch=386; fpc_rtl=i386 ;;
		ppc64) fpc_arch=ppc64; fpc_rtl=powerpc64 ;;
		x86_64) fpc_arch=x64; fpc_rtl=x86_64 ;;
		arm*) fpc_arch=arm; fpc_rtl=arm ;;
		*) continue
	esac
	if test -e "${FPC_COMPILER_BINARY_DIR}"/ppc${fpc_arch}
	then
		upath="$FPC_RTL_UNITS_BASE"/`"${FPC_COMPILER_BINARY_DIR}"/ppc${fpc_arch} -iV`/units/${fpc_rtl}-darwin
		ar -q "$TARGET_TEMP_DIR"/libfpc${narch}.a `ls "$upath"/*/*.o | grep -v 'darwin/fv/'`
		ranlib "$TARGET_TEMP_DIR"/libfpc${narch}.a
		narch=${narch}x
	else
		echo error: can\'t build libfpc.a for $arch \(${FPC_COMPILER_BINARY_DIR}/ppc${fpc_arch} not found, derived from FPC_COMPILER_BINARY_DIR project setting\)
	fi
done

if test ${#narch} -gt 1
then
	lipo -create "$TARGET_TEMP_DIR"/libfpc*.a -output "$TARGET_BUILD_DIR"/libfpc.a
	rm -f "$TARGET_TEMP_DIR"/*.a
else
	mv "$TARGET_TEMP_DIR"/libfpc.a "$TARGET_BUILD_DIR"
fi

