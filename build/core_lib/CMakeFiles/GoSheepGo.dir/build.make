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
include core_lib/CMakeFiles/GoSheepGo.dir/depend.make

# Include the progress variables for this target.
include core_lib/CMakeFiles/GoSheepGo.dir/progress.make

# Include the compile flags for this target's objects.
include core_lib/CMakeFiles/GoSheepGo.dir/flags.make

core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.o: core_lib/CMakeFiles/GoSheepGo.dir/flags.make
core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.o: ../core_lib/GoSheepGo/Core/Drawable.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.o"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.o -c /Users/peepeepoopoo/projects/GoSheepGo/core_lib/GoSheepGo/Core/Drawable.cc

core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.i"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peepeepoopoo/projects/GoSheepGo/core_lib/GoSheepGo/Core/Drawable.cc > CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.i

core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.s"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peepeepoopoo/projects/GoSheepGo/core_lib/GoSheepGo/Core/Drawable.cc -o CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.s

core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.o: core_lib/CMakeFiles/GoSheepGo.dir/flags.make
core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.o: ../core_lib/GoSheepGo/Core/GameWindow.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.o"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.o -c /Users/peepeepoopoo/projects/GoSheepGo/core_lib/GoSheepGo/Core/GameWindow.cc

core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.i"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peepeepoopoo/projects/GoSheepGo/core_lib/GoSheepGo/Core/GameWindow.cc > CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.i

core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.s"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peepeepoopoo/projects/GoSheepGo/core_lib/GoSheepGo/Core/GameWindow.cc -o CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.s

core_lib/CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.o: core_lib/CMakeFiles/GoSheepGo.dir/flags.make
core_lib/CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.o: ../core_lib/extern/tinyxml2/tinyxml2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object core_lib/CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.o"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.o -c /Users/peepeepoopoo/projects/GoSheepGo/core_lib/extern/tinyxml2/tinyxml2.cpp

core_lib/CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.i"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peepeepoopoo/projects/GoSheepGo/core_lib/extern/tinyxml2/tinyxml2.cpp > CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.i

core_lib/CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.s"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peepeepoopoo/projects/GoSheepGo/core_lib/extern/tinyxml2/tinyxml2.cpp -o CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.s

# Object files for target GoSheepGo
GoSheepGo_OBJECTS = \
"CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.o" \
"CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.o" \
"CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.o"

# External object files for target GoSheepGo
GoSheepGo_EXTERNAL_OBJECTS =

core_lib/libGoSheepGo.dylib: core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/Drawable.cc.o
core_lib/libGoSheepGo.dylib: core_lib/CMakeFiles/GoSheepGo.dir/GoSheepGo/Core/GameWindow.cc.o
core_lib/libGoSheepGo.dylib: core_lib/CMakeFiles/GoSheepGo.dir/extern/tinyxml2/tinyxml2.cpp.o
core_lib/libGoSheepGo.dylib: core_lib/CMakeFiles/GoSheepGo.dir/build.make
core_lib/libGoSheepGo.dylib: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libSDL2maind.a
core_lib/libGoSheepGo.dylib: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libSDL2d.a
core_lib/libGoSheepGo.dylib: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libSDL2_image.a
core_lib/libGoSheepGo.dylib: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libSDL2d.a
core_lib/libGoSheepGo.dylib: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libpng16d.a
core_lib/libGoSheepGo.dylib: /Users/peepeepoopoo/projects/vcpkg/installed/x64-osx/debug/lib/libz.a
core_lib/libGoSheepGo.dylib: core_lib/CMakeFiles/GoSheepGo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peepeepoopoo/projects/GoSheepGo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libGoSheepGo.dylib"
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GoSheepGo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core_lib/CMakeFiles/GoSheepGo.dir/build: core_lib/libGoSheepGo.dylib

.PHONY : core_lib/CMakeFiles/GoSheepGo.dir/build

core_lib/CMakeFiles/GoSheepGo.dir/clean:
	cd /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib && $(CMAKE_COMMAND) -P CMakeFiles/GoSheepGo.dir/cmake_clean.cmake
.PHONY : core_lib/CMakeFiles/GoSheepGo.dir/clean

core_lib/CMakeFiles/GoSheepGo.dir/depend:
	cd /Users/peepeepoopoo/projects/GoSheepGo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peepeepoopoo/projects/GoSheepGo /Users/peepeepoopoo/projects/GoSheepGo/core_lib /Users/peepeepoopoo/projects/GoSheepGo/build /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib /Users/peepeepoopoo/projects/GoSheepGo/build/core_lib/CMakeFiles/GoSheepGo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core_lib/CMakeFiles/GoSheepGo.dir/depend

