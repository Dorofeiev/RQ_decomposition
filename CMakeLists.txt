cmake_minimum_required(VERSION 3.23)
project(Test)

set(CMAKE_CXX_STANDARD 20)

find_package(Eigen3 CONFIG REQUIRED)

add_executable(Test main.cpp)

target_link_libraries(
        Test
        PRIVATE
        Eigen3::Eigen
)
