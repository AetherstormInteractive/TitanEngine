cmake_minimum_required (VERSION 3.8)

add_library (TitanEngine SHARED "src/TitanEngine.cpp" "src/TitanEngine.h")

target_link_libraries(TitanEngine glfw glm EnTT spdlog)