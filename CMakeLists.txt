cmake_minimum_required(VERSION 3.27)
project(Terminal_dungeon_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(Terminal_dungeon_game main.cpp
        GameEngine.cpp
        GameEngine.h
        Player.cpp
        Player.h
        GameReports.cpp
        GameReports.h)
