cmake_minimum_required(VERSION 2.6)
project(reportpp)

option(REPORTPP_BUILD_SHARED "Build shared object insted static library" FALSE)

file(GLOB_RECURSE PARSER_SRC ${CMAKE_CURRENT_SOURCE_DIR}/xml-schema/src/*.c*)

set(SRC_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/ReportGen.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/Report.cpp
  ${PARSER_SRC}
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/xml-schema/include
    ${CMAKE_CURRENT_SOURCE_DIR}/xml-schema/src
)

if (REPORTPP_BUILD_SHARED)
  add_library(reportpp SHARED ${SRC_FILES})
else()
  add_library(reportpp STATIC ${SRC_FILES})
endif()

add_executable(reportpp_tst ${SRC_FILES})

target_link_libraries(reportpp_tst
  hpdf
  xerces-c
)

target_link_libraries(reportpp
  hpdf
)

set_property(TARGET reportpp APPEND_STRING PROPERTY COMPILE_FLAGS "-std=c++11")
set_property(TARGET reportpp_tst APPEND_STRING PROPERTY COMPILE_FLAGS "-std=c++11")
