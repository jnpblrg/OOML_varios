# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/juanpa/ooml_varios/OOML_varios

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juanpa/ooml_varios/OOML_varios/build

# Include any dependencies generated for this target.
include CMakeFiles/soportegolf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/soportegolf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/soportegolf.dir/flags.make

CMakeFiles/soportegolf.dir/soportegolf.cpp.o: CMakeFiles/soportegolf.dir/flags.make
CMakeFiles/soportegolf.dir/soportegolf.cpp.o: ../soportegolf.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/juanpa/ooml_varios/OOML_varios/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/soportegolf.dir/soportegolf.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/soportegolf.dir/soportegolf.cpp.o -c /home/juanpa/ooml_varios/OOML_varios/soportegolf.cpp

CMakeFiles/soportegolf.dir/soportegolf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/soportegolf.dir/soportegolf.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/juanpa/ooml_varios/OOML_varios/soportegolf.cpp > CMakeFiles/soportegolf.dir/soportegolf.cpp.i

CMakeFiles/soportegolf.dir/soportegolf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/soportegolf.dir/soportegolf.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/juanpa/ooml_varios/OOML_varios/soportegolf.cpp -o CMakeFiles/soportegolf.dir/soportegolf.cpp.s

CMakeFiles/soportegolf.dir/soportegolf.cpp.o.requires:
.PHONY : CMakeFiles/soportegolf.dir/soportegolf.cpp.o.requires

CMakeFiles/soportegolf.dir/soportegolf.cpp.o.provides: CMakeFiles/soportegolf.dir/soportegolf.cpp.o.requires
	$(MAKE) -f CMakeFiles/soportegolf.dir/build.make CMakeFiles/soportegolf.dir/soportegolf.cpp.o.provides.build
.PHONY : CMakeFiles/soportegolf.dir/soportegolf.cpp.o.provides

CMakeFiles/soportegolf.dir/soportegolf.cpp.o.provides.build: CMakeFiles/soportegolf.dir/soportegolf.cpp.o

# Object files for target soportegolf
soportegolf_OBJECTS = \
"CMakeFiles/soportegolf.dir/soportegolf.cpp.o"

# External object files for target soportegolf
soportegolf_EXTERNAL_OBJECTS =

../bin/soportegolf: CMakeFiles/soportegolf.dir/soportegolf.cpp.o
../bin/soportegolf: CMakeFiles/soportegolf.dir/build.make
../bin/soportegolf: CMakeFiles/soportegolf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/soportegolf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/soportegolf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/soportegolf.dir/build: ../bin/soportegolf
.PHONY : CMakeFiles/soportegolf.dir/build

CMakeFiles/soportegolf.dir/requires: CMakeFiles/soportegolf.dir/soportegolf.cpp.o.requires
.PHONY : CMakeFiles/soportegolf.dir/requires

CMakeFiles/soportegolf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/soportegolf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/soportegolf.dir/clean

CMakeFiles/soportegolf.dir/depend:
	cd /home/juanpa/ooml_varios/OOML_varios/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juanpa/ooml_varios/OOML_varios /home/juanpa/ooml_varios/OOML_varios /home/juanpa/ooml_varios/OOML_varios/build /home/juanpa/ooml_varios/OOML_varios/build /home/juanpa/ooml_varios/OOML_varios/build/CMakeFiles/soportegolf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/soportegolf.dir/depend

