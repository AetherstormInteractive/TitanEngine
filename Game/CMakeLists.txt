cmake_minimum_required (VERSION 3.8)

add_executable (Game "src/Game.cpp" "src/Game.h")

target_link_libraries(Game TitanEngine TitanAudio TitanPhysics TitanRenderer)