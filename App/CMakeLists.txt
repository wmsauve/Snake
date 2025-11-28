add_executable(Snake Snake.cpp)

target_include_directories(Snake PRIVATE "${SFML_ROOT}/include")

target_link_libraries(Snake
    PRIVATE Core
    PRIVATE UI
    PRIVATE SFML::Graphics
    PRIVATE SFML::Audio
    PRIVATE SFML::Window
    PRIVATE SFML::System
    PRIVATE SFML::Network
)

add_custom_command(TARGET Snake POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${SFML_ROOT}/bin"
        "$<TARGET_FILE_DIR:Snake>"
)

add_custom_command(TARGET Snake POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${SFGUI_ROOT}/bin"
        "$<TARGET_FILE_DIR:Snake>"
)