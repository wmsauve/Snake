add_library(UI)

target_sources(UI
    PRIVATE
        Private/MainWindow.cpp
)

target_include_directories(UI
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Public
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Private
)