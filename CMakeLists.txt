cmake_minimum_required(VERSION 3.10)
project(GameOfLife)

set(CMAKE_CXX_STANDARD 11)

add_executable(life 
    src/main.cpp
    src/game.cpp
    src/cell.cpp
)

add_executable(tests test/test.cpp)
target_link_libraries(tests PRIVATE life)
