cmake_minimum_required(VERSION 3.10)
project(capydi)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (PROJECT_IS_TOP_LEVEL)
    include(cmake/Dependencies.cmake)
endif()

find_package(Doxygen REQUIRED)

add_custom_target(capyarm_generate_docs
    COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_SOURCE_DIR}/docs/Doxyfile
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/docs
    COMMENT "Generating API documentation with Doxygen"
    VERBATIM
)

add_subdirectory(core)

if (PROJECT_IS_TOP_LEVEL)
    add_subdirectory(testing)
endif()
