
include_directories(${PROJECT_SOURCE_DIR}/protoc/${Test_Name})

file (GLOB PROTO_FILES "${PROJECT_SOURCE_DIR}/protoc/${Test_Name}/*.protoc")

execute_process(COMMAND ${PROTOBUF_PROTOC_EXECUTABLE} -I=${PROJECT_SOURCE_DIR}/protoc/${Test_Name} --cpp_out=${PROJECT_SOURCE_DIR}/protoc/${Test_Name}  ${PROTO_FILES})

file (GLOB SRC_FILES "${PROJECT_SOURCE_DIR}/protoc/${Test_Name}/*.cc")
file (GLOB INC_FILES "${PROJECT_SOURCE_DIR}/protoc/${Test_Name}/*.h")

add_executable(${EXE_NAME} main.cpp ${SRC_FILES} ${INC_FILES})
target_link_libraries(${EXE_NAME} protobuf)


