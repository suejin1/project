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
CMAKE_SOURCE_DIR = /home/chj/workspace/project/project_main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chj/workspace/project/project_main

# Include any dependencies generated for this target.
include CMakeFiles/program.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program.dir/flags.make

CMakeFiles/program.dir/main.cc.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/main.cc.o: main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/project_main/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/program.dir/main.cc.o"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/main.cc.o -c /home/chj/workspace/project/project_main/main.cc

CMakeFiles/program.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/main.cc.i"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/project_main/main.cc > CMakeFiles/program.dir/main.cc.i

CMakeFiles/program.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/main.cc.s"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/project_main/main.cc -o CMakeFiles/program.dir/main.cc.s

# Object files for target program
program_OBJECTS = \
"CMakeFiles/program.dir/main.cc.o"

# External object files for target program
program_EXTERNAL_OBJECTS =

program: CMakeFiles/program.dir/main.cc.o
program: CMakeFiles/program.dir/build.make
program: func/libfunc.a
program: CMakeFiles/program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chj/workspace/project/project_main/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable program"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/program.dir/build: program

.PHONY : CMakeFiles/program.dir/build

CMakeFiles/program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program.dir/clean

CMakeFiles/program.dir/depend:
	cd /home/chj/workspace/project/project_main && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chj/workspace/project/project_main /home/chj/workspace/project/project_main /home/chj/workspace/project/project_main /home/chj/workspace/project/project_main /home/chj/workspace/project/project_main/CMakeFiles/program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/program.dir/depend

