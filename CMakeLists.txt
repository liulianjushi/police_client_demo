# cmake needs this line
cmake_minimum_required(VERSION 3.10.2)

# Define project name
project(police_client_demo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

# Find OpenCV, you may need to set OpenCV_DIR variable
# to the absolute path to the directory containing OpenCVConfig.cmake file
# via the command line or GUI
find_package(OpenCV REQUIRED)

# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")

# Add OpenCV headers location to your include paths
include_directories(${OpenCV_INCLUDE_DIRS})

# Cmake find modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

find_package(Protobuf REQUIRED)
find_package(GRPC REQUIRED)

# set(PROTOS "${CMAKE_CURRENT_SOURCE_DIR}/protos/*")
file(GLOB PROTOS "${CMAKE_CURRENT_SOURCE_DIR}/protos/*.proto")
set(PROTO_SRC_DIR ${CMAKE_CURRENT_BINARY_DIR}/proto-src)
file(MAKE_DIRECTORY ${PROTO_SRC_DIR})
include_directories(${PROTO_SRC_DIR})

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_SRC_DIR} ${PROTOS})
grpc_generate_cpp(GRPC_SRCS GRPC_HDRS ${PROTO_SRC_DIR} ${PROTOS})


# Building face_emo client
add_executable(face_emo_client
    ${CMAKE_CURRENT_SOURCE_DIR}/face_emo_main.cpp
    ${PROTO_SRC_DIR}/FaceEmogDetectAPI.pb.cc
    ${PROTO_SRC_DIR}/FaceEmogDetectAPI.grpc.pb.cc
    ${PROTO_SRC_DIR}/common.pb.cc
    ${PROTO_SRC_DIR}/common.grpc.pb.cc
)
target_link_libraries(face_emo_client
    gRPC::grpc++_reflection
    protobuf::libprotobuf
    ${OpenCV_LIBS}
)


# Building crowd_count client
add_executable(crowd_count_client
    ${CMAKE_CURRENT_SOURCE_DIR}/crowd_count_main.cpp
    ${PROTO_SRC_DIR}/CrowdCountAPI.pb.cc
    ${PROTO_SRC_DIR}/CrowdCountAPI.grpc.pb.cc
    ${PROTO_SRC_DIR}/common.pb.cc
    ${PROTO_SRC_DIR}/common.grpc.pb.cc
)
target_link_libraries(crowd_count_client
    gRPC::grpc++_reflection
    protobuf::libprotobuf
    ${OpenCV_LIBS}
)


# Building face_recog client
add_executable(face_recog_client
    ${CMAKE_CURRENT_SOURCE_DIR}/face_recog_main.cpp
    ${PROTO_SRC_DIR}/FaceRecogAPI.pb.cc
    ${PROTO_SRC_DIR}/FaceRecogAPI.grpc.pb.cc
    ${PROTO_SRC_DIR}/common.pb.cc
    ${PROTO_SRC_DIR}/common.grpc.pb.cc
)
target_link_libraries(face_recog_client
    gRPC::grpc++_reflection
    protobuf::libprotobuf
    ${OpenCV_LIBS}
)

# Building person_face_emo client
add_executable(person_face_emo_client
    ${CMAKE_CURRENT_SOURCE_DIR}/person_face_emo_main.cpp
    ${PROTO_SRC_DIR}/PersonFaceEmoDetectAPI.pb.cc
    ${PROTO_SRC_DIR}/PersonFaceEmoDetectAPI.grpc.pb.cc
    ${PROTO_SRC_DIR}/common.pb.cc
    ${PROTO_SRC_DIR}/common.grpc.pb.cc
)
target_link_libraries(person_face_emo_client
    gRPC::grpc++_reflection
    protobuf::libprotobuf
    ${OpenCV_LIBS}
)


# Building person_re_id client
add_executable(person_re_id_client
    ${CMAKE_CURRENT_SOURCE_DIR}/person_re_id_main.cpp
    ${PROTO_SRC_DIR}/PersonReIDAPI.pb.cc
    ${PROTO_SRC_DIR}/PersonReIDAPI.grpc.pb.cc
    ${PROTO_SRC_DIR}/common.pb.cc
    ${PROTO_SRC_DIR}/common.grpc.pb.cc
)
target_link_libraries(person_re_id_client
    gRPC::grpc++_reflection
    protobuf::libprotobuf
    ${OpenCV_LIBS}
)

