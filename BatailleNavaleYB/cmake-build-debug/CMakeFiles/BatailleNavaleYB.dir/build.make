# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BatailleNavaleYB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BatailleNavaleYB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BatailleNavaleYB.dir/flags.make

CMakeFiles/BatailleNavaleYB.dir/main.c.obj: CMakeFiles/BatailleNavaleYB.dir/flags.make
CMakeFiles/BatailleNavaleYB.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BatailleNavaleYB.dir/main.c.obj"
	C:\MinGW\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BatailleNavaleYB.dir\main.c.obj   -c C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\main.c

CMakeFiles/BatailleNavaleYB.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BatailleNavaleYB.dir/main.c.i"
	C:\MinGW\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\main.c > CMakeFiles\BatailleNavaleYB.dir\main.c.i

CMakeFiles/BatailleNavaleYB.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BatailleNavaleYB.dir/main.c.s"
	C:\MinGW\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\main.c -o CMakeFiles\BatailleNavaleYB.dir\main.c.s

# Object files for target BatailleNavaleYB
BatailleNavaleYB_OBJECTS = \
"CMakeFiles/BatailleNavaleYB.dir/main.c.obj"

# External object files for target BatailleNavaleYB
BatailleNavaleYB_EXTERNAL_OBJECTS =

BatailleNavaleYB.exe: CMakeFiles/BatailleNavaleYB.dir/main.c.obj
BatailleNavaleYB.exe: CMakeFiles/BatailleNavaleYB.dir/build.make
BatailleNavaleYB.exe: CMakeFiles/BatailleNavaleYB.dir/linklibs.rsp
BatailleNavaleYB.exe: CMakeFiles/BatailleNavaleYB.dir/objects1.rsp
BatailleNavaleYB.exe: CMakeFiles/BatailleNavaleYB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BatailleNavaleYB.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BatailleNavaleYB.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BatailleNavaleYB.dir/build: BatailleNavaleYB.exe

.PHONY : CMakeFiles/BatailleNavaleYB.dir/build

CMakeFiles/BatailleNavaleYB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BatailleNavaleYB.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BatailleNavaleYB.dir/clean

CMakeFiles/BatailleNavaleYB.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\cmake-build-debug C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\cmake-build-debug C:\Users\Yoann.BONZON\Documents\GitHub\BatailleN\BatailleNavaleYB\cmake-build-debug\CMakeFiles\BatailleNavaleYB.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BatailleNavaleYB.dir/depend

