cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 11)
project(third)
set(OUT ${CMAKE_CURRENT_SOURCE_DIR}/build)
include_directories(".")
set(SOURCE_FILE third.cc)
add_library(third SHARED ${SOURCE_FILE})

# 设置生成的动态库的名字（可选）
set_target_properties(third PROPERTIES OUTPUT_NAME "third")

set(EXECUTE_FILE main.cc)
link_directories(${OUT})
link_libraries(third)
add_executable(Main ${EXECUTE_FILE})
# 链接动态库到可执行文件
target_link_libraries(Main third)

message("start")
message(${OUT})
message("end")