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
include tests/CMakeFiles/my_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/my_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/my_test.dir/flags.make

tests/CMakeFiles/my_test.dir/TestDrawer.cpp.o: tests/CMakeFiles/my_test.dir/flags.make
tests/CMakeFiles/my_test.dir/TestDrawer.cpp.o: ../tests/TestDrawer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/my_test.dir/TestDrawer.cpp.o"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_test.dir/TestDrawer.cpp.o -c /Users/peepeepoopoo/projects/GoSheepGo/tests/TestDrawer.cpp

tests/CMakeFiles/my_test.dir/TestDrawer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_test.dir/TestDrawer.cpp.i"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peepeepoopoo/projects/GoSheepGo/tests/TestDrawer.cpp > CMakeFiles/my_test.dir/TestDrawer.cpp.i

tests/CMakeFiles/my_test.dir/TestDrawer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_test.dir/TestDrawer.cpp.s"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peepeepoopoo/projects/GoSheepGo/tests/TestDrawer.cpp -o CMakeFiles/my_test.dir/TestDrawer.cpp.s

tests/CMakeFiles/my_test.dir/TestGraphic.cpp.o: tests/CMakeFiles/my_test.dir/flags.make
tests/CMakeFiles/my_test.dir/TestGraphic.cpp.o: ../tests/TestGraphic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/my_test.dir/TestGraphic.cpp.o"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_test.dir/TestGraphic.cpp.o -c /Users/peepeepoopoo/projects/GoSheepGo/tests/TestGraphic.cpp

tests/CMakeFiles/my_test.dir/TestGraphic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_test.dir/TestGraphic.cpp.i"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peepeepoopoo/projects/GoSheepGo/tests/TestGraphic.cpp > CMakeFiles/my_test.dir/TestGraphic.cpp.i

tests/CMakeFiles/my_test.dir/TestGraphic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_test.dir/TestGraphic.cpp.s"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peepeepoopoo/projects/GoSheepGo/tests/TestGraphic.cpp -o CMakeFiles/my_test.dir/TestGraphic.cpp.s

tests/CMakeFiles/my_test.dir/TestGraphicGroup.cpp.o: tests/CMakeFiles/my_test.dir/flags.make
tests/CMakeFiles/my_test.dir/TestGraphicGroup.cpp.o: ../tests/TestGraphicGroup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/CMakeFiles/my_test.dir/TestGraphicGroup.cpp.o"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_test.dir/TestGraphicGroup.cpp.o -c /Users/peepeepoopoo/projects/GoSheepGo/tests/TestGraphicGroup.cpp

tests/CMakeFiles/my_test.dir/TestGraphicGroup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_test.dir/TestGraphicGroup.cpp.i"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peepeepoopoo/projects/GoSheepGo/tests/TestGraphicGroup.cpp > CMakeFiles/my_test.dir/TestGraphicGroup.cpp.i

tests/CMakeFiles/my_test.dir/TestGraphicGroup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_test.dir/TestGraphicGroup.cpp.s"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peepeepoopoo/projects/GoSheepGo/tests/TestGraphicGroup.cpp -o CMakeFiles/my_test.dir/TestGraphicGroup.cpp.s

tests/CMakeFiles/my_test.dir/TestTileGraphics.cpp.o: tests/CMakeFiles/my_test.dir/flags.make
tests/CMakeFiles/my_test.dir/TestTileGraphics.cpp.o: ../tests/TestTileGraphics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tests/CMakeFiles/my_test.dir/TestTileGraphics.cpp.o"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_test.dir/TestTileGraphics.cpp.o -c /Users/peepeepoopoo/projects/GoSheepGo/tests/TestTileGraphics.cpp

tests/CMakeFiles/my_test.dir/TestTileGraphics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_test.dir/TestTileGraphics.cpp.i"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peepeepoopoo/projects/GoSheepGo/tests/TestTileGraphics.cpp > CMakeFiles/my_test.dir/TestTileGraphics.cpp.i

tests/CMakeFiles/my_test.dir/TestTileGraphics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_test.dir/TestTileGraphics.cpp.s"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peepeepoopoo/projects/GoSheepGo/tests/TestTileGraphics.cpp -o CMakeFiles/my_test.dir/TestTileGraphics.cpp.s

# Object files for target my_test
my_test_OBJECTS = \
"CMakeFiles/my_test.dir/TestDrawer.cpp.o" \
"CMakeFiles/my_test.dir/TestGraphic.cpp.o" \
"CMakeFiles/my_test.dir/TestGraphicGroup.cpp.o" \
"CMakeFiles/my_test.dir/TestTileGraphics.cpp.o"

# External object files for target my_test
my_test_EXTERNAL_OBJECTS =

tests/my_test: tests/CMakeFiles/my_test.dir/TestDrawer.cpp.o
tests/my_test: tests/CMakeFiles/my_test.dir/TestGraphic.cpp.o
tests/my_test: tests/CMakeFiles/my_test.dir/TestGraphicGroup.cpp.o
tests/my_test: tests/CMakeFiles/my_test.dir/TestTileGraphics.cpp.o
tests/my_test: tests/CMakeFiles/my_test.dir/build.make
tests/my_test: core_lib/libGoSheepGo.dylib
tests/my_test: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libSDL2maind.a
tests/my_test: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libSDL2d.a
tests/my_test: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libSDL2_image.a
tests/my_test: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libSDL2d.a
tests/my_test: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libpng16d.a
tests/my_test: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libz.a
tests/my_test: tests/CMakeFiles/my_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable my_test"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/my_test.dir/build: tests/my_test

.PHONY : tests/CMakeFiles/my_test.dir/build

tests/CMakeFiles/my_test.dir/clean:
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/my_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/my_test.dir/clean

tests/CMakeFiles/my_test.dir/depend:
	cd /Users/peepeepoopoo/projects/GoSheepGo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peepeepoopoo/projects/GoSheepGo /Users/peepeepoopoo/projects/GoSheepGo/tests /Users/peepeepoopoo/projects/GoSheepGo/build /Users/peepeepoopoo/projects/GoSheepGo/build/tests /Users/peepeepoopoo/projects/GoSheepGo/build/tests/CMakeFiles/my_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/my_test.dir/depend

