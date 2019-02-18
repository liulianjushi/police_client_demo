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
CMAKE_SOURCE_DIR = /police_client_demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /police_client_demo/build

# Include any dependencies generated for this target.
include CMakeFiles/face_recog_client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/face_recog_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/face_recog_client.dir/flags.make

proto-src/FaceRecogAPI.pb.cc: ../protos/FaceRecogAPI.proto
proto-src/FaceRecogAPI.pb.cc: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on /police_client_demo/protos/FaceRecogAPI.proto"
	/usr/local/bin/protoc --cpp_out /police_client_demo/build/proto-src -I /police_client_demo/protos /police_client_demo/protos/FaceRecogAPI.proto

proto-src/FaceRecogAPI.pb.h: proto-src/FaceRecogAPI.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate proto-src/FaceRecogAPI.pb.h

proto-src/FaceRecogAPI.grpc.pb.cc: ../protos/FaceRecogAPI.proto
proto-src/FaceRecogAPI.grpc.pb.cc: /usr/local/bin/protoc
proto-src/FaceRecogAPI.grpc.pb.cc: /usr/local/bin/grpc_cpp_plugin
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running C++ gRPC compiler on /police_client_demo/protos/FaceRecogAPI.proto"
	/usr/local/bin/protoc --grpc_out /police_client_demo/build/proto-src -I /police_client_demo/protos --plugin=protoc-gen-grpc=/usr/local/bin/grpc_cpp_plugin /police_client_demo/protos/FaceRecogAPI.proto

proto-src/FaceRecogAPI.grpc.pb.h: proto-src/FaceRecogAPI.grpc.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate proto-src/FaceRecogAPI.grpc.pb.h

proto-src/common.pb.cc: ../protos/common.proto
proto-src/common.pb.cc: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Running C++ protocol buffer compiler on /police_client_demo/protos/common.proto"
	/usr/local/bin/protoc --cpp_out /police_client_demo/build/proto-src -I /police_client_demo/protos /police_client_demo/protos/common.proto

proto-src/common.pb.h: proto-src/common.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate proto-src/common.pb.h

proto-src/common.grpc.pb.cc: ../protos/common.proto
proto-src/common.grpc.pb.cc: /usr/local/bin/protoc
proto-src/common.grpc.pb.cc: /usr/local/bin/grpc_cpp_plugin
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Running C++ gRPC compiler on /police_client_demo/protos/common.proto"
	/usr/local/bin/protoc --grpc_out /police_client_demo/build/proto-src -I /police_client_demo/protos --plugin=protoc-gen-grpc=/usr/local/bin/grpc_cpp_plugin /police_client_demo/protos/common.proto

proto-src/common.grpc.pb.h: proto-src/common.grpc.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate proto-src/common.grpc.pb.h

CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o: CMakeFiles/face_recog_client.dir/flags.make
CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o: ../face_recog_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o -c /police_client_demo/face_recog_main.cpp

CMakeFiles/face_recog_client.dir/face_recog_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/face_recog_client.dir/face_recog_main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /police_client_demo/face_recog_main.cpp > CMakeFiles/face_recog_client.dir/face_recog_main.cpp.i

CMakeFiles/face_recog_client.dir/face_recog_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/face_recog_client.dir/face_recog_main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /police_client_demo/face_recog_main.cpp -o CMakeFiles/face_recog_client.dir/face_recog_main.cpp.s

CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o.requires:

.PHONY : CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o.requires

CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o.provides: CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o.requires
	$(MAKE) -f CMakeFiles/face_recog_client.dir/build.make CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o.provides.build
.PHONY : CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o.provides

CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o.provides.build: CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o


CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o: CMakeFiles/face_recog_client.dir/flags.make
CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o: proto-src/FaceRecogAPI.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o -c /police_client_demo/build/proto-src/FaceRecogAPI.pb.cc

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /police_client_demo/build/proto-src/FaceRecogAPI.pb.cc > CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.i

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /police_client_demo/build/proto-src/FaceRecogAPI.pb.cc -o CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.s

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o.requires:

.PHONY : CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o.requires

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o.provides: CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/face_recog_client.dir/build.make CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o.provides.build
.PHONY : CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o.provides

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o.provides.build: CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o


CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o: CMakeFiles/face_recog_client.dir/flags.make
CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o: proto-src/FaceRecogAPI.grpc.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o -c /police_client_demo/build/proto-src/FaceRecogAPI.grpc.pb.cc

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /police_client_demo/build/proto-src/FaceRecogAPI.grpc.pb.cc > CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.i

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /police_client_demo/build/proto-src/FaceRecogAPI.grpc.pb.cc -o CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.s

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o.requires:

.PHONY : CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o.requires

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o.provides: CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/face_recog_client.dir/build.make CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o.provides.build
.PHONY : CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o.provides

CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o.provides.build: CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o


CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o: CMakeFiles/face_recog_client.dir/flags.make
CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o: proto-src/common.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o -c /police_client_demo/build/proto-src/common.pb.cc

CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /police_client_demo/build/proto-src/common.pb.cc > CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.i

CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /police_client_demo/build/proto-src/common.pb.cc -o CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.s

CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o.requires:

.PHONY : CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o.requires

CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o.provides: CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/face_recog_client.dir/build.make CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o.provides.build
.PHONY : CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o.provides

CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o.provides.build: CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o


CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o: CMakeFiles/face_recog_client.dir/flags.make
CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o: proto-src/common.grpc.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o -c /police_client_demo/build/proto-src/common.grpc.pb.cc

CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /police_client_demo/build/proto-src/common.grpc.pb.cc > CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.i

CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /police_client_demo/build/proto-src/common.grpc.pb.cc -o CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.s

CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o.requires:

.PHONY : CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o.requires

CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o.provides: CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/face_recog_client.dir/build.make CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o.provides.build
.PHONY : CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o.provides

CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o.provides.build: CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o


# Object files for target face_recog_client
face_recog_client_OBJECTS = \
"CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o" \
"CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o" \
"CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o" \
"CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o" \
"CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o"

# External object files for target face_recog_client
face_recog_client_EXTERNAL_OBJECTS =

face_recog_client: CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o
face_recog_client: CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o
face_recog_client: CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o
face_recog_client: CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o
face_recog_client: CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o
face_recog_client: CMakeFiles/face_recog_client.dir/build.make
face_recog_client: /usr/local/lib/libgrpc++_reflection.so
face_recog_client: /usr/local/lib/libprotobuf.so
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_dnn_objdetect.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_hfs.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_img_hash.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_tracking.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_xfeatures2d.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.4.1
face_recog_client: /usr/local/lib/libgrpc++.so
face_recog_client: /usr/local/lib/libgrpc.so
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_dnn.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.4.1
face_recog_client: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.4.1
face_recog_client: CMakeFiles/face_recog_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/police_client_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable face_recog_client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/face_recog_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/face_recog_client.dir/build: face_recog_client

.PHONY : CMakeFiles/face_recog_client.dir/build

CMakeFiles/face_recog_client.dir/requires: CMakeFiles/face_recog_client.dir/face_recog_main.cpp.o.requires
CMakeFiles/face_recog_client.dir/requires: CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.pb.cc.o.requires
CMakeFiles/face_recog_client.dir/requires: CMakeFiles/face_recog_client.dir/proto-src/FaceRecogAPI.grpc.pb.cc.o.requires
CMakeFiles/face_recog_client.dir/requires: CMakeFiles/face_recog_client.dir/proto-src/common.pb.cc.o.requires
CMakeFiles/face_recog_client.dir/requires: CMakeFiles/face_recog_client.dir/proto-src/common.grpc.pb.cc.o.requires

.PHONY : CMakeFiles/face_recog_client.dir/requires

CMakeFiles/face_recog_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/face_recog_client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/face_recog_client.dir/clean

CMakeFiles/face_recog_client.dir/depend: proto-src/FaceRecogAPI.pb.cc
CMakeFiles/face_recog_client.dir/depend: proto-src/FaceRecogAPI.pb.h
CMakeFiles/face_recog_client.dir/depend: proto-src/FaceRecogAPI.grpc.pb.cc
CMakeFiles/face_recog_client.dir/depend: proto-src/FaceRecogAPI.grpc.pb.h
CMakeFiles/face_recog_client.dir/depend: proto-src/common.pb.cc
CMakeFiles/face_recog_client.dir/depend: proto-src/common.pb.h
CMakeFiles/face_recog_client.dir/depend: proto-src/common.grpc.pb.cc
CMakeFiles/face_recog_client.dir/depend: proto-src/common.grpc.pb.h
	cd /police_client_demo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /police_client_demo /police_client_demo /police_client_demo/build /police_client_demo/build /police_client_demo/build/CMakeFiles/face_recog_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/face_recog_client.dir/depend

