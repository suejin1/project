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
CMAKE_SOURCE_DIR = /home/chj/workspace/project/end

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chj/workspace/project/end

# Include any dependencies generated for this target.
include CMakeFiles/myapp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myapp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myapp.dir/flags.make

CMakeFiles/myapp.dir/a.cc.o: CMakeFiles/myapp.dir/flags.make
CMakeFiles/myapp.dir/a.cc.o: a.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/end/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myapp.dir/a.cc.o"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myapp.dir/a.cc.o -c /home/chj/workspace/project/end/a.cc

CMakeFiles/myapp.dir/a.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myapp.dir/a.cc.i"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/end/a.cc > CMakeFiles/myapp.dir/a.cc.i

CMakeFiles/myapp.dir/a.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myapp.dir/a.cc.s"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/end/a.cc -o CMakeFiles/myapp.dir/a.cc.s

CMakeFiles/myapp.dir/example.cc.o: CMakeFiles/myapp.dir/flags.make
CMakeFiles/myapp.dir/example.cc.o: example.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/end/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myapp.dir/example.cc.o"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myapp.dir/example.cc.o -c /home/chj/workspace/project/end/example.cc

CMakeFiles/myapp.dir/example.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myapp.dir/example.cc.i"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/end/example.cc > CMakeFiles/myapp.dir/example.cc.i

CMakeFiles/myapp.dir/example.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myapp.dir/example.cc.s"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/end/example.cc -o CMakeFiles/myapp.dir/example.cc.s

CMakeFiles/myapp.dir/checkDate.cc.o: CMakeFiles/myapp.dir/flags.make
CMakeFiles/myapp.dir/checkDate.cc.o: checkDate.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/end/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myapp.dir/checkDate.cc.o"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myapp.dir/checkDate.cc.o -c /home/chj/workspace/project/end/checkDate.cc

CMakeFiles/myapp.dir/checkDate.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myapp.dir/checkDate.cc.i"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/end/checkDate.cc > CMakeFiles/myapp.dir/checkDate.cc.i

CMakeFiles/myapp.dir/checkDate.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myapp.dir/checkDate.cc.s"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/end/checkDate.cc -o CMakeFiles/myapp.dir/checkDate.cc.s

CMakeFiles/myapp.dir/receive.cc.o: CMakeFiles/myapp.dir/flags.make
CMakeFiles/myapp.dir/receive.cc.o: receive.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/end/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myapp.dir/receive.cc.o"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myapp.dir/receive.cc.o -c /home/chj/workspace/project/end/receive.cc

CMakeFiles/myapp.dir/receive.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myapp.dir/receive.cc.i"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/end/receive.cc > CMakeFiles/myapp.dir/receive.cc.i

CMakeFiles/myapp.dir/receive.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myapp.dir/receive.cc.s"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/end/receive.cc -o CMakeFiles/myapp.dir/receive.cc.s

CMakeFiles/myapp.dir/send.cc.o: CMakeFiles/myapp.dir/flags.make
CMakeFiles/myapp.dir/send.cc.o: send.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/end/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/myapp.dir/send.cc.o"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myapp.dir/send.cc.o -c /home/chj/workspace/project/end/send.cc

CMakeFiles/myapp.dir/send.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myapp.dir/send.cc.i"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/end/send.cc > CMakeFiles/myapp.dir/send.cc.i

CMakeFiles/myapp.dir/send.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myapp.dir/send.cc.s"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/end/send.cc -o CMakeFiles/myapp.dir/send.cc.s

CMakeFiles/myapp.dir/input.cc.o: CMakeFiles/myapp.dir/flags.make
CMakeFiles/myapp.dir/input.cc.o: input.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chj/workspace/project/end/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/myapp.dir/input.cc.o"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myapp.dir/input.cc.o -c /home/chj/workspace/project/end/input.cc

CMakeFiles/myapp.dir/input.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myapp.dir/input.cc.i"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chj/workspace/project/end/input.cc > CMakeFiles/myapp.dir/input.cc.i

CMakeFiles/myapp.dir/input.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myapp.dir/input.cc.s"
	/opt/fsl-imx-xwayland/4.14-thud/sysroots/x86_64-pokysdk-linux/usr/bin/aarch64-poky-linux/aarch64-poky-linux-g++   --sysroot=/opt/fsl-imx-xwayland/4.14-thud/sysroots/aarch64-poky-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chj/workspace/project/end/input.cc -o CMakeFiles/myapp.dir/input.cc.s

# Object files for target myapp
myapp_OBJECTS = \
"CMakeFiles/myapp.dir/a.cc.o" \
"CMakeFiles/myapp.dir/example.cc.o" \
"CMakeFiles/myapp.dir/checkDate.cc.o" \
"CMakeFiles/myapp.dir/receive.cc.o" \
"CMakeFiles/myapp.dir/send.cc.o" \
"CMakeFiles/myapp.dir/input.cc.o"

# External object files for target myapp
myapp_EXTERNAL_OBJECTS =

myapp: CMakeFiles/myapp.dir/a.cc.o
myapp: CMakeFiles/myapp.dir/example.cc.o
myapp: CMakeFiles/myapp.dir/checkDate.cc.o
myapp: CMakeFiles/myapp.dir/receive.cc.o
myapp: CMakeFiles/myapp.dir/send.cc.o
myapp: CMakeFiles/myapp.dir/input.cc.o
myapp: CMakeFiles/myapp.dir/build.make
myapp: CMakeFiles/myapp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chj/workspace/project/end/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable myapp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myapp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myapp.dir/build: myapp

.PHONY : CMakeFiles/myapp.dir/build

CMakeFiles/myapp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myapp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myapp.dir/clean

CMakeFiles/myapp.dir/depend:
	cd /home/chj/workspace/project/end && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chj/workspace/project/end /home/chj/workspace/project/end /home/chj/workspace/project/end /home/chj/workspace/project/end /home/chj/workspace/project/end/CMakeFiles/myapp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myapp.dir/depend

