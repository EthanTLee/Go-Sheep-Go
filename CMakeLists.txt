if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)
project(GoSheepGo)

cmake_minimum_required(VERSION 3.19)


  



add_subdirectory(core_lib)
add_subdirectory(tests)

add_executable(GoSheep main.cpp)

target_link_libraries(GoSheep PUBLIC ${PROJECT_NAME} )