cmake_minimum_required (VERSION 3.8)

project ("Titan")
project ("Game")

add_subdirectory ("TitanPhysics")
add_subdirectory ("TitanAudio")
add_subdirectory ("TitanRenderer")
add_subdirectory ("TitanEngine")
add_subdirectory ("Game")

add_subdirectory ("3rdparty/glfw")
add_subdirectory ("3rdparty/entt")
add_subdirectory ("3rdparty/glm")
add_subdirectory ("3rdparty/spdlog")

set_target_properties(TitanEngine TitanPhysics TitanAudio TitanRenderer Game glfw EnTT glm spdlog PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)