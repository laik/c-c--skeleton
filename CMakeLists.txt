cmake_minimum_required(VERSION 3.26.4)
project(c_c___skeleton VERSION 1.0.0
        LANGUAGES C CXX
        DESCRIPTION "An open-source big data platform designed and optimized for the Internet of Things(IOT)"
)

set(VERNUMBER "0.0.0.1")
set(VERCOMPATIBLE "0.0.0.0")

if (NOT DEFINED APP_SOURCE_DIR)
    set(APP_SOURCE_DIR ${PROJECT_SOURCE_DIR})
endif ()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# include
include_directories(include)
# 3rdparty
add_subdirectory(3rdparty)

set(CMAKE_MODULE_PATH "${APP_SOURCE_DIR}/cmake")
include(${CMAKE_MODULE_PATH}/cmake.platform)
include(${CMAKE_MODULE_PATH}/cmake.define)
include(${CMAKE_MODULE_PATH}/cmake.options)
include(${CMAKE_MODULE_PATH}/cmake.version)

set_property(GLOBAL PROPERTY GLOBAL_DEPENDS_NO_CYCLES OFF)

add_subdirectory(source)
add_subdirectory(tests)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# bin build
# demo1
add_executable(demo app/demo/demo.cpp)

target_link_libraries(demo
        PRIVATE
        fmt::fmt
)
# demo2
#add_executable(demo2 app/demo2/demo.cpp)