cmake_minimum_required(VERSION 3.23)
project(RQ_decomposition)

set(CMAKE_CXX_STANDARD 14)

find_package(Eigen3 CONFIG REQUIRED)


add_executable (
        RQ_decomposition
        main.cpp
)
target_link_libraries(
        RQ_decomposition
        PRIVATE
        Eigen3::Eigen
)