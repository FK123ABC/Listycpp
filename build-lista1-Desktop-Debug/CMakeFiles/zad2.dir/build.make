# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/s346382/Pulpit/Listycpp/lista1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s346382/Pulpit/Listycpp/build-lista1-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/zad2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/zad2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/zad2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zad2.dir/flags.make

CMakeFiles/zad2.dir/zad2.cpp.o: CMakeFiles/zad2.dir/flags.make
CMakeFiles/zad2.dir/zad2.cpp.o: /home/s346382/Pulpit/Listycpp/lista1/zad2.cpp
CMakeFiles/zad2.dir/zad2.cpp.o: CMakeFiles/zad2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s346382/Pulpit/Listycpp/build-lista1-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zad2.dir/zad2.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/zad2.dir/zad2.cpp.o -MF CMakeFiles/zad2.dir/zad2.cpp.o.d -o CMakeFiles/zad2.dir/zad2.cpp.o -c /home/s346382/Pulpit/Listycpp/lista1/zad2.cpp

CMakeFiles/zad2.dir/zad2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zad2.dir/zad2.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s346382/Pulpit/Listycpp/lista1/zad2.cpp > CMakeFiles/zad2.dir/zad2.cpp.i

CMakeFiles/zad2.dir/zad2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zad2.dir/zad2.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s346382/Pulpit/Listycpp/lista1/zad2.cpp -o CMakeFiles/zad2.dir/zad2.cpp.s

# Object files for target zad2
zad2_OBJECTS = \
"CMakeFiles/zad2.dir/zad2.cpp.o"

# External object files for target zad2
zad2_EXTERNAL_OBJECTS =

zad2: CMakeFiles/zad2.dir/zad2.cpp.o
zad2: CMakeFiles/zad2.dir/build.make
zad2: CMakeFiles/zad2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s346382/Pulpit/Listycpp/build-lista1-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zad2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zad2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zad2.dir/build: zad2
.PHONY : CMakeFiles/zad2.dir/build

CMakeFiles/zad2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/zad2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/zad2.dir/clean

CMakeFiles/zad2.dir/depend:
	cd /home/s346382/Pulpit/Listycpp/build-lista1-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s346382/Pulpit/Listycpp/lista1 /home/s346382/Pulpit/Listycpp/lista1 /home/s346382/Pulpit/Listycpp/build-lista1-Desktop-Debug /home/s346382/Pulpit/Listycpp/build-lista1-Desktop-Debug /home/s346382/Pulpit/Listycpp/build-lista1-Desktop-Debug/CMakeFiles/zad2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zad2.dir/depend

