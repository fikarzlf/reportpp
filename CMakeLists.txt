cmake_minimum_required(VERSION 2.6)
project(reportpp)

option(REPORTPP_BUILD_SHARED "Build shared object insted static library" FALSE)

set(SRC_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/ReportGen.cpp
)

if (REPORTPP_BUILD_SHARED)
  add_library(reportpp SHARED ${SRC_FILES})
else()
  add_library(reportpp STATIC ${SRC_FILES})
endif()

target_link_libraries(reportpp
  hpdf
)

# NOTE enable the below for C++11 support
set_property(TARGET reportpp APPEND_STRING PROPERTY COMPILE_FLAGS "-std=c++11")
