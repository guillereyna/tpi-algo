# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/Guille/AppData/Local/JetBrains/CLion2020.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Guille/AppData/Local/JetBrains/CLion2020.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug"

# Include any dependencies generated for this target.
include lib/googletest-master/googlemock/CMakeFiles/gmock.dir/depend.make

# Include the progress variables for this target.
include lib/googletest-master/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googletest-master/googlemock/CMakeFiles/gmock.dir/flags.make

lib/googletest-master/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: lib/googletest-master/googlemock/CMakeFiles/gmock.dir/flags.make
lib/googletest-master/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: ../lib/googletest-master/googlemock/src/gmock-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googletest-master/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o"
	cd "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/lib/googletest-master/googlemock" && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock.dir/src/gmock-all.cc.o -c "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/lib/googletest-master/googlemock/src/gmock-all.cc"

lib/googletest-master/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/lib/googletest-master/googlemock" && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/lib/googletest-master/googlemock/src/gmock-all.cc" > CMakeFiles/gmock.dir/src/gmock-all.cc.i

lib/googletest-master/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/lib/googletest-master/googlemock" && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/lib/googletest-master/googlemock/src/gmock-all.cc" -o CMakeFiles/gmock.dir/src/gmock-all.cc.s

# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/src/gmock-all.cc.o"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

lib/googletest-master/googlemock/libgmockd.a: lib/googletest-master/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
lib/googletest-master/googlemock/libgmockd.a: lib/googletest-master/googlemock/CMakeFiles/gmock.dir/build.make
lib/googletest-master/googlemock/libgmockd.a: lib/googletest-master/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgmockd.a"
	cd "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/lib/googletest-master/googlemock" && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean_target.cmake
	cd "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/lib/googletest-master/googlemock" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/googletest-master/googlemock/CMakeFiles/gmock.dir/build: lib/googletest-master/googlemock/libgmockd.a

.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock.dir/build

lib/googletest-master/googlemock/CMakeFiles/gmock.dir/clean:
	cd "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/lib/googletest-master/googlemock" && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean.cmake
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock.dir/clean

lib/googletest-master/googlemock/CMakeFiles/gmock.dir/depend:
	cd "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide" "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/lib/googletest-master/googlemock" "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug" "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/lib/googletest-master/googlemock" "/cygdrive/d/Universidad/Algoritmos y Estructuras de Datos I/TPI/TPI-template/TPI-toroide/cmake-build-debug/lib/googletest-master/googlemock/CMakeFiles/gmock.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock.dir/depend
