cmake_minimum_required(VERSION 2.6)
project(reportpp)

set(SRC_FILES
# TODO  ${CMAKE_CURRENT_SOURCE_DIR}/src/<source files>
)

add_library(reportpp SHARED ${SRC_FILES})

target_link_libraries(reportpp
  hpdf
)

# NOTE enable the below for C++11 support
# set_property(TARGET reportpp APPEND_STRING PROPERTY COMPILE_FLAGS "-std=c++11")
