cmake_minimum_required(VERSION 3.15)
project(RPG2)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPG2 main.cpp Character.cpp Character.h Item.cpp Item.h Location.cpp Location.h Game.cpp Game.h FightStrategy.cpp FightStrategy.h)