# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thespygeek/Projects/green-engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thespygeek/Projects/green-engine/src

# Include any dependencies generated for this target.
include thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/depend.make

# Include the progress variables for this target.
include thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/progress.make

# Include the compile flags for this target's objects.
include thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/flags.make

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o: thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/flags.make
thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o: ../thirdparty/glm/test/core/core_force_xyzw_only.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thespygeek/Projects/green-engine/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o"
	cd /home/thespygeek/Projects/green-engine/src/thirdparty/glm/test/core && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o -c /home/thespygeek/Projects/green-engine/thirdparty/glm/test/core/core_force_xyzw_only.cpp

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.i"
	cd /home/thespygeek/Projects/green-engine/src/thirdparty/glm/test/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thespygeek/Projects/green-engine/thirdparty/glm/test/core/core_force_xyzw_only.cpp > CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.i

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.s"
	cd /home/thespygeek/Projects/green-engine/src/thirdparty/glm/test/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thespygeek/Projects/green-engine/thirdparty/glm/test/core/core_force_xyzw_only.cpp -o CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.s

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o.requires:

.PHONY : thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o.requires

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o.provides: thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o.requires
	$(MAKE) -f thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/build.make thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o.provides.build
.PHONY : thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o.provides

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o.provides.build: thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o


# Object files for target test-core_force_xyzw_only
test__core_force_xyzw_only_OBJECTS = \
"CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o"

# External object files for target test-core_force_xyzw_only
test__core_force_xyzw_only_EXTERNAL_OBJECTS =

thirdparty/glm/test/core/test-core_force_xyzw_only: thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o
thirdparty/glm/test/core/test-core_force_xyzw_only: thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/build.make
thirdparty/glm/test/core/test-core_force_xyzw_only: thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thespygeek/Projects/green-engine/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test-core_force_xyzw_only"
	cd /home/thespygeek/Projects/green-engine/src/thirdparty/glm/test/core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-core_force_xyzw_only.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/build: thirdparty/glm/test/core/test-core_force_xyzw_only

.PHONY : thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/build

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/requires: thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/core_force_xyzw_only.cpp.o.requires

.PHONY : thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/requires

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/clean:
	cd /home/thespygeek/Projects/green-engine/src/thirdparty/glm/test/core && $(CMAKE_COMMAND) -P CMakeFiles/test-core_force_xyzw_only.dir/cmake_clean.cmake
.PHONY : thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/clean

thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/depend:
	cd /home/thespygeek/Projects/green-engine/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thespygeek/Projects/green-engine /home/thespygeek/Projects/green-engine/thirdparty/glm/test/core /home/thespygeek/Projects/green-engine/src /home/thespygeek/Projects/green-engine/src/thirdparty/glm/test/core /home/thespygeek/Projects/green-engine/src/thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : thirdparty/glm/test/core/CMakeFiles/test-core_force_xyzw_only.dir/depend
