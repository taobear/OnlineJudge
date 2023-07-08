cmake_minimum_required(VERSION 3.11.0)

project(OnlineJudge)

# Enable ExternalProject CMake module
include(FetchContent)

# Add gtest
FetchContent_Declare(
    googletest
    GIT_REPOSITORY    https://github.com/google/googletest.git
    GIT_TAG           v1.13.0
)

FetchContent_MakeAvailable(googletest)

include_directories(${googletest_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/util)


add_subdirectory(LeetCode)
add_subdirectory(SwordOffer)