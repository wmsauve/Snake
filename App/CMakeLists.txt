add_executable(Snake Snake.cpp)

target_link_libraries(Snake
    PRIVATE Core
    PRIVATE UI
    PRIVATE SFML::Graphics 
    PRIVATE SFML::Audio 
    PRIVATE SFML::Network
)