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
CMAKE_SOURCE_DIR = /home/ruaro/ubs/my_preesm_apps/SynParallel/Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin

# Include any dependencies generated for this target.
include CMakeFiles/syn_parallel.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/syn_parallel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/syn_parallel.dir/flags.make

CMakeFiles/syn_parallel.dir/src/cons.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/src/cons.c.o: ../src/cons.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/syn_parallel.dir/src/cons.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/src/cons.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/cons.c

CMakeFiles/syn_parallel.dir/src/cons.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/src/cons.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/cons.c > CMakeFiles/syn_parallel.dir/src/cons.c.i

CMakeFiles/syn_parallel.dir/src/cons.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/src/cons.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/cons.c -o CMakeFiles/syn_parallel.dir/src/cons.c.s

CMakeFiles/syn_parallel.dir/src/cons.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/src/cons.c.o.requires

CMakeFiles/syn_parallel.dir/src/cons.c.o.provides: CMakeFiles/syn_parallel.dir/src/cons.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/src/cons.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/src/cons.c.o.provides

CMakeFiles/syn_parallel.dir/src/cons.c.o.provides.build: CMakeFiles/syn_parallel.dir/src/cons.c.o


CMakeFiles/syn_parallel.dir/src/processing.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/src/processing.c.o: ../src/processing.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/syn_parallel.dir/src/processing.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/src/processing.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/processing.c

CMakeFiles/syn_parallel.dir/src/processing.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/src/processing.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/processing.c > CMakeFiles/syn_parallel.dir/src/processing.c.i

CMakeFiles/syn_parallel.dir/src/processing.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/src/processing.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/processing.c -o CMakeFiles/syn_parallel.dir/src/processing.c.s

CMakeFiles/syn_parallel.dir/src/processing.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/src/processing.c.o.requires

CMakeFiles/syn_parallel.dir/src/processing.c.o.provides: CMakeFiles/syn_parallel.dir/src/processing.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/src/processing.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/src/processing.c.o.provides

CMakeFiles/syn_parallel.dir/src/processing.c.o.provides.build: CMakeFiles/syn_parallel.dir/src/processing.c.o


CMakeFiles/syn_parallel.dir/src/prod.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/src/prod.c.o: ../src/prod.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/syn_parallel.dir/src/prod.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/src/prod.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/prod.c

CMakeFiles/syn_parallel.dir/src/prod.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/src/prod.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/prod.c > CMakeFiles/syn_parallel.dir/src/prod.c.i

CMakeFiles/syn_parallel.dir/src/prod.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/src/prod.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/src/prod.c -o CMakeFiles/syn_parallel.dir/src/prod.c.s

CMakeFiles/syn_parallel.dir/src/prod.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/src/prod.c.o.requires

CMakeFiles/syn_parallel.dir/src/prod.c.o.provides: CMakeFiles/syn_parallel.dir/src/prod.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/src/prod.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/src/prod.c.o.provides

CMakeFiles/syn_parallel.dir/src/prod.c.o.provides.build: CMakeFiles/syn_parallel.dir/src/prod.c.o


CMakeFiles/syn_parallel.dir/generated/Core0.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/Core0.c.o: ../generated/Core0.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/syn_parallel.dir/generated/Core0.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/Core0.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core0.c

CMakeFiles/syn_parallel.dir/generated/Core0.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/Core0.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core0.c > CMakeFiles/syn_parallel.dir/generated/Core0.c.i

CMakeFiles/syn_parallel.dir/generated/Core0.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/Core0.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core0.c -o CMakeFiles/syn_parallel.dir/generated/Core0.c.s

CMakeFiles/syn_parallel.dir/generated/Core0.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/Core0.c.o.requires

CMakeFiles/syn_parallel.dir/generated/Core0.c.o.provides: CMakeFiles/syn_parallel.dir/generated/Core0.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/Core0.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/Core0.c.o.provides

CMakeFiles/syn_parallel.dir/generated/Core0.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/Core0.c.o


CMakeFiles/syn_parallel.dir/generated/Core1.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/Core1.c.o: ../generated/Core1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/syn_parallel.dir/generated/Core1.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/Core1.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core1.c

CMakeFiles/syn_parallel.dir/generated/Core1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/Core1.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core1.c > CMakeFiles/syn_parallel.dir/generated/Core1.c.i

CMakeFiles/syn_parallel.dir/generated/Core1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/Core1.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core1.c -o CMakeFiles/syn_parallel.dir/generated/Core1.c.s

CMakeFiles/syn_parallel.dir/generated/Core1.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/Core1.c.o.requires

CMakeFiles/syn_parallel.dir/generated/Core1.c.o.provides: CMakeFiles/syn_parallel.dir/generated/Core1.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/Core1.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/Core1.c.o.provides

CMakeFiles/syn_parallel.dir/generated/Core1.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/Core1.c.o


CMakeFiles/syn_parallel.dir/generated/Core2.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/Core2.c.o: ../generated/Core2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/syn_parallel.dir/generated/Core2.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/Core2.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core2.c

CMakeFiles/syn_parallel.dir/generated/Core2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/Core2.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core2.c > CMakeFiles/syn_parallel.dir/generated/Core2.c.i

CMakeFiles/syn_parallel.dir/generated/Core2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/Core2.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core2.c -o CMakeFiles/syn_parallel.dir/generated/Core2.c.s

CMakeFiles/syn_parallel.dir/generated/Core2.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/Core2.c.o.requires

CMakeFiles/syn_parallel.dir/generated/Core2.c.o.provides: CMakeFiles/syn_parallel.dir/generated/Core2.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/Core2.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/Core2.c.o.provides

CMakeFiles/syn_parallel.dir/generated/Core2.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/Core2.c.o


CMakeFiles/syn_parallel.dir/generated/Core3.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/Core3.c.o: ../generated/Core3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/syn_parallel.dir/generated/Core3.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/Core3.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core3.c

CMakeFiles/syn_parallel.dir/generated/Core3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/Core3.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core3.c > CMakeFiles/syn_parallel.dir/generated/Core3.c.i

CMakeFiles/syn_parallel.dir/generated/Core3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/Core3.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/Core3.c -o CMakeFiles/syn_parallel.dir/generated/Core3.c.s

CMakeFiles/syn_parallel.dir/generated/Core3.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/Core3.c.o.requires

CMakeFiles/syn_parallel.dir/generated/Core3.c.o.provides: CMakeFiles/syn_parallel.dir/generated/Core3.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/Core3.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/Core3.c.o.provides

CMakeFiles/syn_parallel.dir/generated/Core3.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/Core3.c.o


CMakeFiles/syn_parallel.dir/generated/communication.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/communication.c.o: ../generated/communication.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/syn_parallel.dir/generated/communication.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/communication.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/communication.c

CMakeFiles/syn_parallel.dir/generated/communication.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/communication.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/communication.c > CMakeFiles/syn_parallel.dir/generated/communication.c.i

CMakeFiles/syn_parallel.dir/generated/communication.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/communication.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/communication.c -o CMakeFiles/syn_parallel.dir/generated/communication.c.s

CMakeFiles/syn_parallel.dir/generated/communication.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/communication.c.o.requires

CMakeFiles/syn_parallel.dir/generated/communication.c.o.provides: CMakeFiles/syn_parallel.dir/generated/communication.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/communication.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/communication.c.o.provides

CMakeFiles/syn_parallel.dir/generated/communication.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/communication.c.o


CMakeFiles/syn_parallel.dir/generated/dump.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/dump.c.o: ../generated/dump.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/syn_parallel.dir/generated/dump.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/dump.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/dump.c

CMakeFiles/syn_parallel.dir/generated/dump.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/dump.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/dump.c > CMakeFiles/syn_parallel.dir/generated/dump.c.i

CMakeFiles/syn_parallel.dir/generated/dump.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/dump.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/dump.c -o CMakeFiles/syn_parallel.dir/generated/dump.c.s

CMakeFiles/syn_parallel.dir/generated/dump.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/dump.c.o.requires

CMakeFiles/syn_parallel.dir/generated/dump.c.o.provides: CMakeFiles/syn_parallel.dir/generated/dump.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/dump.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/dump.c.o.provides

CMakeFiles/syn_parallel.dir/generated/dump.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/dump.c.o


CMakeFiles/syn_parallel.dir/generated/fifo.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/fifo.c.o: ../generated/fifo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/syn_parallel.dir/generated/fifo.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/fifo.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/fifo.c

CMakeFiles/syn_parallel.dir/generated/fifo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/fifo.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/fifo.c > CMakeFiles/syn_parallel.dir/generated/fifo.c.i

CMakeFiles/syn_parallel.dir/generated/fifo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/fifo.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/fifo.c -o CMakeFiles/syn_parallel.dir/generated/fifo.c.s

CMakeFiles/syn_parallel.dir/generated/fifo.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/fifo.c.o.requires

CMakeFiles/syn_parallel.dir/generated/fifo.c.o.provides: CMakeFiles/syn_parallel.dir/generated/fifo.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/fifo.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/fifo.c.o.provides

CMakeFiles/syn_parallel.dir/generated/fifo.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/fifo.c.o


CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o: ../generated/mac_barrier.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/mac_barrier.c

CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/mac_barrier.c > CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.i

CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/mac_barrier.c -o CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.s

CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o.requires

CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o.provides: CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o.provides

CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o


CMakeFiles/syn_parallel.dir/generated/main.c.o: CMakeFiles/syn_parallel.dir/flags.make
CMakeFiles/syn_parallel.dir/generated/main.c.o: ../generated/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/syn_parallel.dir/generated/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/syn_parallel.dir/generated/main.c.o   -c /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/main.c

CMakeFiles/syn_parallel.dir/generated/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/syn_parallel.dir/generated/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/main.c > CMakeFiles/syn_parallel.dir/generated/main.c.i

CMakeFiles/syn_parallel.dir/generated/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/syn_parallel.dir/generated/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/generated/main.c -o CMakeFiles/syn_parallel.dir/generated/main.c.s

CMakeFiles/syn_parallel.dir/generated/main.c.o.requires:

.PHONY : CMakeFiles/syn_parallel.dir/generated/main.c.o.requires

CMakeFiles/syn_parallel.dir/generated/main.c.o.provides: CMakeFiles/syn_parallel.dir/generated/main.c.o.requires
	$(MAKE) -f CMakeFiles/syn_parallel.dir/build.make CMakeFiles/syn_parallel.dir/generated/main.c.o.provides.build
.PHONY : CMakeFiles/syn_parallel.dir/generated/main.c.o.provides

CMakeFiles/syn_parallel.dir/generated/main.c.o.provides.build: CMakeFiles/syn_parallel.dir/generated/main.c.o


# Object files for target syn_parallel
syn_parallel_OBJECTS = \
"CMakeFiles/syn_parallel.dir/src/cons.c.o" \
"CMakeFiles/syn_parallel.dir/src/processing.c.o" \
"CMakeFiles/syn_parallel.dir/src/prod.c.o" \
"CMakeFiles/syn_parallel.dir/generated/Core0.c.o" \
"CMakeFiles/syn_parallel.dir/generated/Core1.c.o" \
"CMakeFiles/syn_parallel.dir/generated/Core2.c.o" \
"CMakeFiles/syn_parallel.dir/generated/Core3.c.o" \
"CMakeFiles/syn_parallel.dir/generated/communication.c.o" \
"CMakeFiles/syn_parallel.dir/generated/dump.c.o" \
"CMakeFiles/syn_parallel.dir/generated/fifo.c.o" \
"CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o" \
"CMakeFiles/syn_parallel.dir/generated/main.c.o"

# External object files for target syn_parallel
syn_parallel_EXTERNAL_OBJECTS =

Release/syn_parallel: CMakeFiles/syn_parallel.dir/src/cons.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/src/processing.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/src/prod.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/Core0.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/Core1.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/Core2.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/Core3.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/communication.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/dump.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/fifo.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/generated/main.c.o
Release/syn_parallel: CMakeFiles/syn_parallel.dir/build.make
Release/syn_parallel: CMakeFiles/syn_parallel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable Release/syn_parallel"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/syn_parallel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/syn_parallel.dir/build: Release/syn_parallel

.PHONY : CMakeFiles/syn_parallel.dir/build

CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/src/cons.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/src/processing.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/src/prod.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/Core0.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/Core1.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/Core2.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/Core3.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/communication.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/dump.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/fifo.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/mac_barrier.c.o.requires
CMakeFiles/syn_parallel.dir/requires: CMakeFiles/syn_parallel.dir/generated/main.c.o.requires

.PHONY : CMakeFiles/syn_parallel.dir/requires

CMakeFiles/syn_parallel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/syn_parallel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/syn_parallel.dir/clean

CMakeFiles/syn_parallel.dir/depend:
	cd /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ruaro/ubs/my_preesm_apps/SynParallel/Code /home/ruaro/ubs/my_preesm_apps/SynParallel/Code /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin /home/ruaro/ubs/my_preesm_apps/SynParallel/Code/bin/CMakeFiles/syn_parallel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/syn_parallel.dir/depend
