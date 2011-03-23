# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. Example variables are:
#   CPACK_GENERATOR                     - Generator used to create package
#   CPACK_INSTALL_CMAKE_PROJECTS        - For each project (path, name, component)
#   CPACK_CMAKE_GENERATOR               - CMake Generator used for the projects
#   CPACK_INSTALL_COMMANDS              - Extra commands to install components
#   CPACK_INSTALL_DIRECTORIES           - Extra directories to install
#   CPACK_PACKAGE_DESCRIPTION_FILE      - Description file for the package
#   CPACK_PACKAGE_DESCRIPTION_SUMMARY   - Summary of the package
#   CPACK_PACKAGE_EXECUTABLES           - List of pairs of executables and labels
#   CPACK_PACKAGE_FILE_NAME             - Name of the package generated
#   CPACK_PACKAGE_ICON                  - Icon used for the package
#   CPACK_PACKAGE_INSTALL_DIRECTORY     - Name of directory for the installer
#   CPACK_PACKAGE_NAME                  - Package project name
#   CPACK_PACKAGE_VENDOR                - Package project vendor
#   CPACK_PACKAGE_VERSION               - Package project version
#   CPACK_PACKAGE_VERSION_MAJOR         - Package project version (major)
#   CPACK_PACKAGE_VERSION_MINOR         - Package project version (minor)
#   CPACK_PACKAGE_VERSION_PATCH         - Package project version (patch)

# There are certain generator specific ones

# NSIS Generator:
#   CPACK_PACKAGE_INSTALL_REGISTRY_KEY  - Name of the registry key for the installer
#   CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS - Extra commands used during uninstall
#   CPACK_NSIS_EXTRA_INSTALL_COMMANDS   - Extra commands used during install


SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "OFF")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_NSIS "OFF")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_RPM "OFF")
SET(CPACK_BINARY_STGZ "ON")
SET(CPACK_BINARY_TBZ2 "OFF")
SET(CPACK_BINARY_TGZ "ON")
SET(CPACK_BINARY_TZ "ON")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_CMAKE_GENERATOR "Unix Makefiles")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_GENERATOR "TBZ2")
SET(CPACK_IGNORE_FILES "~;\\.hg;\\.svn;\\.exe$;\\.a$;\\.dll$;\\.xcf$;\\.cxx$;\\.db$;\\.dof$;\\.layout$;\\.zip$;\\.gz$;\\.bz2$;\\.tmp$;\\.core$;\\.sh$;\\.sifz$;\\.svg$;\\.svgz$;\\.ppu$;\\.psd$;\\.o$;Makefile;Doxyfile;CMakeFiles;debug;release$;Debug$;Release$;proto\\.inc$;hwconsts\\.cpp$;playlist\\.inc$;CPack;cmake_install\\.cmake$;config\\.inc$;hwengine\\.desktop$;CMakeCache\\.txt$;^/home/talha/hedgewars-accessible/project_files/HedgewarsMobile/;^/home/talha/hedgewars-accessible/bin/[a-z];^/home/talha/hedgewars-accessible/tools/templates;^/home/talha/hedgewars-accessible/doc;^/home/talha/hedgewars-accessible/templates;^/home/talha/hedgewars-accessible/Graphics;^/home/talha/hedgewars-accessible/realtest;^/home/talha/hedgewars-accessible/tmp;^/home/talha/hedgewars-accessible/utils;^/home/talha/hedgewars-accessible/share/hedgewars/Data/Maps/test;^/home/talha/hedgewars-accessible/share/hedgewars/Data/Themes/ethereal;^/home/talha/hedgewars-accessible/install_manifest.txt;^/home/talha/hedgewars-accessible/CMakeCache.txt;^/home/talha/hedgewars-accessible/hedgewars\\.")
SET(CPACK_INSTALLED_DIRECTORIES "/home/talha/hedgewars-accessible;/")
SET(CPACK_INSTALL_CMAKE_PROJECTS "")
SET(CPACK_INSTALL_PREFIX "/usr/local")
SET(CPACK_MODULE_PATH "/home/talha/hedgewars-accessible/cmake_modules")
SET(CPACK_NSIS_DISPLAY_NAME "Hedgewars 0.9.16-dev")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_PACKAGE_NAME "Hedgewars 0.9.16-dev")
SET(CPACK_OUTPUT_CONFIG_FILE "/home/talha/hedgewars-accessible/CPackConfig.cmake")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-2.8/Templates/CPack.GenericDescription.txt")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Hedgewars, a free turn-based strategy")
SET(CPACK_PACKAGE_EXECUTABLES "hedgewars;hedgewars")
SET(CPACK_PACKAGE_FILE_NAME "hedgewars-src-0.9.16-dev")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "Hedgewars 0.9.16-dev")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "hedgewars 0.9.16-dev")
SET(CPACK_PACKAGE_NAME "hedgewars")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "Hedgewars Project")
SET(CPACK_PACKAGE_VERSION "0.9.16-dev")
SET(CPACK_PACKAGE_VERSION_MAJOR "0")
SET(CPACK_PACKAGE_VERSION_MINOR "9")
SET(CPACK_PACKAGE_VERSION_PATCH "16-dev")
SET(CPACK_RESOURCE_FILE_LICENSE "/home/talha/hedgewars-accessible/COPYING")
SET(CPACK_RESOURCE_FILE_README "/usr/share/cmake-2.8/Templates/CPack.GenericDescription.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-2.8/Templates/CPack.GenericWelcome.txt")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "TBZ2")
SET(CPACK_SOURCE_IGNORE_FILES "~;\\.hg;\\.svn;\\.exe$;\\.a$;\\.dll$;\\.xcf$;\\.cxx$;\\.db$;\\.dof$;\\.layout$;\\.zip$;\\.gz$;\\.bz2$;\\.tmp$;\\.core$;\\.sh$;\\.sifz$;\\.svg$;\\.svgz$;\\.ppu$;\\.psd$;\\.o$;Makefile;Doxyfile;CMakeFiles;debug;release$;Debug$;Release$;proto\\.inc$;hwconsts\\.cpp$;playlist\\.inc$;CPack;cmake_install\\.cmake$;config\\.inc$;hwengine\\.desktop$;CMakeCache\\.txt$;^/home/talha/hedgewars-accessible/project_files/HedgewarsMobile/;^/home/talha/hedgewars-accessible/bin/[a-z];^/home/talha/hedgewars-accessible/tools/templates;^/home/talha/hedgewars-accessible/doc;^/home/talha/hedgewars-accessible/templates;^/home/talha/hedgewars-accessible/Graphics;^/home/talha/hedgewars-accessible/realtest;^/home/talha/hedgewars-accessible/tmp;^/home/talha/hedgewars-accessible/utils;^/home/talha/hedgewars-accessible/share/hedgewars/Data/Maps/test;^/home/talha/hedgewars-accessible/share/hedgewars/Data/Themes/ethereal;^/home/talha/hedgewars-accessible/install_manifest.txt;^/home/talha/hedgewars-accessible/CMakeCache.txt;^/home/talha/hedgewars-accessible/hedgewars\\.")
SET(CPACK_SOURCE_INSTALLED_DIRECTORIES "/home/talha/hedgewars-accessible;/")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/talha/hedgewars-accessible/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_PACKAGE_FILE_NAME "hedgewars-src-0.9.16-dev")
SET(CPACK_SOURCE_TBZ2 "")
SET(CPACK_SOURCE_TGZ "")
SET(CPACK_SOURCE_TOPLEVEL_TAG "Linux-Source")
SET(CPACK_SOURCE_TZ "")
SET(CPACK_SOURCE_ZIP "")
SET(CPACK_STRIP_FILES "")
SET(CPACK_SYSTEM_NAME "Linux")
SET(CPACK_TOPLEVEL_TAG "Linux-Source")
