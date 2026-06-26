cmake_minimum_required(VERSION 3.10)

project(chelik VERSION 0.2.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STARDARD_REQUIRED ON)

add_executable(chelik
	libs/poses.cpp
	libs/flags.cpp
	libs/functions.cpp
	libs/colors.cpp
	chelik.cpp
	)

enable_testing()
add_subdirectory(tests)
