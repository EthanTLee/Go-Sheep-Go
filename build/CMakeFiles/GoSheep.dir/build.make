# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peepeepoopoo/projects/GoSheepGo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peepeepoopoo/projects/GoSheepGo/build

# Include any dependencies generated for this target.
include CMakeFiles/GoSheep.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GoSheep.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GoSheep.dir/flags.make

CMakeFiles/GoSheep.dir/main.cpp.o: CMakeFiles/GoSheep.dir/flags.make
CMakeFiles/GoSheep.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GoSheep.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GoSheep.dir/main.cpp.o -c /Users/peepeepoopoo/projects/GoSheepGo/main.cpp

CMakeFiles/GoSheep.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GoSheep.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peepeepoopoo/projects/GoSheepGo/main.cpp > CMakeFiles/GoSheep.dir/main.cpp.i

CMakeFiles/GoSheep.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GoSheep.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peepeepoopoo/projects/GoSheepGo/main.cpp -o CMakeFiles/GoSheep.dir/main.cpp.s

# Object files for target GoSheep
GoSheep_OBJECTS = \
"CMakeFiles/GoSheep.dir/main.cpp.o"

# External object files for target GoSheep
GoSheep_EXTERNAL_OBJECTS =

GoSheep: CMakeFiles/GoSheep.dir/main.cpp.o
GoSheep: CMakeFiles/GoSheep.dir/build.make
GoSheep: core_lib/libGoSheepGo.dylib
GoSheep: CMakeFiles/GoSheep.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GoSheep"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GoSheep.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GoSheep.dir/build: GoSheep

.PHONY : CMakeFiles/GoSheep.dir/build

CMakeFiles/GoSheep.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GoSheep.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GoSheep.dir/clean

CMakeFiles/GoSheep.dir/depend:
	cd /Users/peepeepoopoo/projects/GoSheepGo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peepeepoopoo/projects/GoSheepGo /Users/peepeepoopoo/projects/GoSheepGo /Users/peepeepoopoo/projects/GoSheepGo/build /Users/peepeepoopoo/projects/GoSheepGo/build /Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles/GoSheep.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GoSheep.dir/depend

