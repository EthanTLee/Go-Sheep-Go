
project(GoSheepGo)
include_directories(extern/SDL2/includes/)

add_subdirectory(core_lib)


add_executable(GoSheep main.cpp)

target_link_libraries(GoSheep PUBLIC ${PROJECT_NAME} )