cmake_minimum_required(VERSION 3.10)

project(Snake)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(SFML_ROOT "${CMAKE_SOURCE_DIR}/external/SFML-3.0.2")
set(SFML_DIR "${SFML_ROOT}/lib/cmake/SFML")
find_package(SFML 3 REQUIRED COMPONENTS Graphics Audio Window System Network)

add_subdirectory(App)
add_subdirectory(Core)
add_subdirectory(UI)