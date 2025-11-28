cmake_minimum_required(VERSION 3.10)

project(Snake)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(SFML_ROOT "${CMAKE_SOURCE_DIR}/external/SFML-3.0.2")
set(SFML_DIR "${SFML_ROOT}/lib/cmake/SFML")
find_package(SFML 3 REQUIRED COMPONENTS Graphics Audio Window System Network)


set(SFGUI_ROOT "${CMAKE_SOURCE_DIR}/external/SFGUI-1.0.0")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${SFGUI_ROOT}/cmake/Modules")
add_library(SFGUI SHARED IMPORTED)
set_target_properties(SFGUI PROPERTIES
    IMPORTED_IMPLIB_DEBUG   "${SFGUI_ROOT}/lib/SFGUI-d.lib"
    IMPORTED_IMPLIB_RELEASE "${SFGUI_ROOT}/lib/SFGUI.lib"
    IMPORTED_LOCATION_DEBUG   "${SFGUI_ROOT}/bin/SFGUI-d.dll"
    IMPORTED_LOCATION_RELEASE "${SFGUI_ROOT}/bin/SFGUI.dll"
    INTERFACE_INCLUDE_DIRECTORIES "${SFGUI_ROOT}/include"
)


add_subdirectory(App)
add_subdirectory(Core)
add_subdirectory(UI)