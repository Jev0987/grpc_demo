# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Environment\C++\cmake-3.30.2-windows-x86_64\cmake-3.30.2-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = D:\Environment\C++\cmake-3.30.2-windows-x86_64\cmake-3.30.2-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\grpc_demo\func_call

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\grpc_demo\func_call\build

# Include any dependencies generated for this target.
include CMakeFiles/func_call_server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/func_call_server.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/func_call_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/func_call_server.dir/flags.make

CMakeFiles/func_call_server.dir/func_call_server.cpp.obj: CMakeFiles/func_call_server.dir/flags.make
CMakeFiles/func_call_server.dir/func_call_server.cpp.obj: CMakeFiles/func_call_server.dir/includes_CXX.rsp
CMakeFiles/func_call_server.dir/func_call_server.cpp.obj: D:/code/grpc_demo/func_call/func_call_server.cpp
CMakeFiles/func_call_server.dir/func_call_server.cpp.obj: CMakeFiles/func_call_server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\code\grpc_demo\func_call\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/func_call_server.dir/func_call_server.cpp.obj"
	D:\Environment\C++\x86_64-11.2.0-release\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/func_call_server.dir/func_call_server.cpp.obj -MF CMakeFiles\func_call_server.dir\func_call_server.cpp.obj.d -o CMakeFiles\func_call_server.dir\func_call_server.cpp.obj -c D:\code\grpc_demo\func_call\func_call_server.cpp

CMakeFiles/func_call_server.dir/func_call_server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/func_call_server.dir/func_call_server.cpp.i"
	D:\Environment\C++\x86_64-11.2.0-release\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\code\grpc_demo\func_call\func_call_server.cpp > CMakeFiles\func_call_server.dir\func_call_server.cpp.i

CMakeFiles/func_call_server.dir/func_call_server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/func_call_server.dir/func_call_server.cpp.s"
	D:\Environment\C++\x86_64-11.2.0-release\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\code\grpc_demo\func_call\func_call_server.cpp -o CMakeFiles\func_call_server.dir\func_call_server.cpp.s

# Object files for target func_call_server
func_call_server_OBJECTS = \
"CMakeFiles/func_call_server.dir/func_call_server.cpp.obj"

# External object files for target func_call_server
func_call_server_EXTERNAL_OBJECTS =

func_call_server.exe: CMakeFiles/func_call_server.dir/func_call_server.cpp.obj
func_call_server.exe: CMakeFiles/func_call_server.dir/build.make
func_call_server.exe: librf_grpc_proto.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_parse.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_initialize.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_globals.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libgrpc++_reflection.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libgrpc++.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libgrpc.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libupb_collections_lib.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libupb_json_lib.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libupb_textformat_lib.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libutf8_range_lib.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libupb.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libre2.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libzlibstatic.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libcares.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libgpr.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_distributions.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_seed_sequences.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_internal_pool_urbg.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_internal_randen.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_internal_randen_hwaes.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_internal_randen_hwaes_impl.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_internal_randen_slow.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_internal_platform.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_internal_seed_material.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_random_seed_gen_exception.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libssl.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libcrypto.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libaddress_sorting.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libprotobuf.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_initialize.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_statusor.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_internal_check_op.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_leak_check.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_die_if_null.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_internal_conditions.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_internal_message.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_examine_stack.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_internal_format.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_internal_proto.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_internal_nullguard.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_internal_log_sink_set.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_globals.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_internal_globals.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_sink.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_entry.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_status.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_strerror.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libutf8_validity.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_usage.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_usage_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_marshalling.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_reflection.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_config.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_program_name.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_private_handle_accessor.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_commandlineflag.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_flags_commandlineflag_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_cord.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_cordz_info.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_cord_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_cordz_functions.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_cordz_handle.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_crc_cord_state.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_crc32c.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_str_format_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_crc_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_crc_cpu_detect.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_raw_hash_set.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_hash.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_city.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_bad_variant_access.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_low_level_hash.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_bad_optional_access.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_hashtablez_sampler.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_exponential_biased.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_synchronization.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_graphcycles_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_kernel_timeout_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_time.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_civil_time.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_time_zone.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_stacktrace.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_symbolize.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_strings.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_string_view.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_strings_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_int128.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_throw_delegate.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_malloc_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_debugging_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_demangle_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_base.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_raw_logging_internal.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_log_severity.a
func_call_server.exe: D:/Environment/grpc_env/mingw64-grpc1.60.0/lib/libabsl_spinlock_wait.a
func_call_server.exe: CMakeFiles/func_call_server.dir/linkLibs.rsp
func_call_server.exe: CMakeFiles/func_call_server.dir/objects1.rsp
func_call_server.exe: CMakeFiles/func_call_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\code\grpc_demo\func_call\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable func_call_server.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\func_call_server.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/func_call_server.dir/build: func_call_server.exe
.PHONY : CMakeFiles/func_call_server.dir/build

CMakeFiles/func_call_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\func_call_server.dir\cmake_clean.cmake
.PHONY : CMakeFiles/func_call_server.dir/clean

CMakeFiles/func_call_server.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\grpc_demo\func_call D:\code\grpc_demo\func_call D:\code\grpc_demo\func_call\build D:\code\grpc_demo\func_call\build D:\code\grpc_demo\func_call\build\CMakeFiles\func_call_server.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/func_call_server.dir/depend

