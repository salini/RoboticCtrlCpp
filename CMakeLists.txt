################################################################################
#
# Configuration
#
################################################################################
cmake_minimum_required(VERSION 2.8)
project(RoboticCtrlCpp)

set(CMAKE_MODULE_PATH       "${RoboticCtrlCpp_SOURCE_DIR}/cmake")

set(EXECUTABLE_OUTPUT_PATH "${RoboticCtrlCpp_BINARY_DIR}/bin")
set(LIBRARY_OUTPUT_PATH     "${RoboticCtrlCpp_BINARY_DIR}/lib")


################################################################################
#
# Search external lib
#
################################################################################

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})


################################################################################
#
# Set include folders and create lib and executable
#
################################################################################

# Set include folders
include_directories(include)


# Add subdirectories for Cmake compilation
add_subdirectory(src)



