cmake_minimum_required(VERSION 3.10)
project(DroneWorkspace)

# 寻找系统里的 OpenCV 库
find_package(OpenCV REQUIRED)

# 告诉编译器头文件在哪里
include_directories(${OpenCV_INCLUDE_DIRS})

# 编译 hello.cpp 生成 hello
add_executable(hello hello.cpp)

# 编译 camera.cpp 生成 camera_test，并链接 OpenCV 库
add_executable(camera_test camera.cpp)
target_link_libraries(camera_test ${OpenCV_LIBS})
