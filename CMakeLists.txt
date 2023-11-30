cmake_minimum_required(VERSION 3.21)
project(Final_mehdi)

set(CMAKE_CXX_STANDARD 14)

add_executable(Final_mehdi main.cpp AppManager.cpp AppManager.h AssetManager.cpp AssetManager.h Background.cpp Background.h Barrier.cpp Barrier.h BaseState.h Button.cpp Button.h Definitions.h Enemy.cpp Enemy.h Game.cpp Game.h LifeDisplay.cpp LifeDisplay.h MainMenu.cpp MainMenu.h Player.cpp Player.h Projectile.cpp Projectile.h TopDisplay.cpp TopDisplay.h UFO.cpp UFO.h)

target_link_libraries(Final_mehdi sfml-system sfml-window sfml-graphics)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)