# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/tangshuaishuai/intesight/calibration_tool1/transform

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tangshuaishuai/intesight/calibration_tool1/transform/build

# Include any dependencies generated for this target.
include CMakeFiles/lut.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lut.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lut.dir/flags.make

CMakeFiles/lut.dir/cam_model.cpp.o: CMakeFiles/lut.dir/flags.make
CMakeFiles/lut.dir/cam_model.cpp.o: ../cam_model.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tangshuaishuai/intesight/calibration_tool1/transform/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lut.dir/cam_model.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lut.dir/cam_model.cpp.o -c /home/tangshuaishuai/intesight/calibration_tool1/transform/cam_model.cpp

CMakeFiles/lut.dir/cam_model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lut.dir/cam_model.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tangshuaishuai/intesight/calibration_tool1/transform/cam_model.cpp > CMakeFiles/lut.dir/cam_model.cpp.i

CMakeFiles/lut.dir/cam_model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lut.dir/cam_model.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tangshuaishuai/intesight/calibration_tool1/transform/cam_model.cpp -o CMakeFiles/lut.dir/cam_model.cpp.s

CMakeFiles/lut.dir/cam_model.cpp.o.requires:

.PHONY : CMakeFiles/lut.dir/cam_model.cpp.o.requires

CMakeFiles/lut.dir/cam_model.cpp.o.provides: CMakeFiles/lut.dir/cam_model.cpp.o.requires
	$(MAKE) -f CMakeFiles/lut.dir/build.make CMakeFiles/lut.dir/cam_model.cpp.o.provides.build
.PHONY : CMakeFiles/lut.dir/cam_model.cpp.o.provides

CMakeFiles/lut.dir/cam_model.cpp.o.provides.build: CMakeFiles/lut.dir/cam_model.cpp.o


CMakeFiles/lut.dir/image_view_convert.cpp.o: CMakeFiles/lut.dir/flags.make
CMakeFiles/lut.dir/image_view_convert.cpp.o: ../image_view_convert.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tangshuaishuai/intesight/calibration_tool1/transform/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lut.dir/image_view_convert.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lut.dir/image_view_convert.cpp.o -c /home/tangshuaishuai/intesight/calibration_tool1/transform/image_view_convert.cpp

CMakeFiles/lut.dir/image_view_convert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lut.dir/image_view_convert.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tangshuaishuai/intesight/calibration_tool1/transform/image_view_convert.cpp > CMakeFiles/lut.dir/image_view_convert.cpp.i

CMakeFiles/lut.dir/image_view_convert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lut.dir/image_view_convert.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tangshuaishuai/intesight/calibration_tool1/transform/image_view_convert.cpp -o CMakeFiles/lut.dir/image_view_convert.cpp.s

CMakeFiles/lut.dir/image_view_convert.cpp.o.requires:

.PHONY : CMakeFiles/lut.dir/image_view_convert.cpp.o.requires

CMakeFiles/lut.dir/image_view_convert.cpp.o.provides: CMakeFiles/lut.dir/image_view_convert.cpp.o.requires
	$(MAKE) -f CMakeFiles/lut.dir/build.make CMakeFiles/lut.dir/image_view_convert.cpp.o.provides.build
.PHONY : CMakeFiles/lut.dir/image_view_convert.cpp.o.provides

CMakeFiles/lut.dir/image_view_convert.cpp.o.provides.build: CMakeFiles/lut.dir/image_view_convert.cpp.o


# Object files for target lut
lut_OBJECTS = \
"CMakeFiles/lut.dir/cam_model.cpp.o" \
"CMakeFiles/lut.dir/image_view_convert.cpp.o"

# External object files for target lut
lut_EXTERNAL_OBJECTS =

liblut.so: CMakeFiles/lut.dir/cam_model.cpp.o
liblut.so: CMakeFiles/lut.dir/image_view_convert.cpp.o
liblut.so: CMakeFiles/lut.dir/build.make
liblut.so: CMakeFiles/lut.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tangshuaishuai/intesight/calibration_tool1/transform/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library liblut.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lut.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lut.dir/build: liblut.so

.PHONY : CMakeFiles/lut.dir/build

CMakeFiles/lut.dir/requires: CMakeFiles/lut.dir/cam_model.cpp.o.requires
CMakeFiles/lut.dir/requires: CMakeFiles/lut.dir/image_view_convert.cpp.o.requires

.PHONY : CMakeFiles/lut.dir/requires

CMakeFiles/lut.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lut.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lut.dir/clean

CMakeFiles/lut.dir/depend:
	cd /home/tangshuaishuai/intesight/calibration_tool1/transform/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tangshuaishuai/intesight/calibration_tool1/transform /home/tangshuaishuai/intesight/calibration_tool1/transform /home/tangshuaishuai/intesight/calibration_tool1/transform/build /home/tangshuaishuai/intesight/calibration_tool1/transform/build /home/tangshuaishuai/intesight/calibration_tool1/transform/build/CMakeFiles/lut.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lut.dir/depend

