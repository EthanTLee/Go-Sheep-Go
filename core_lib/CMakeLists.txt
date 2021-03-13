file(GLOB_RECURSE SRCS src/ *.c *.cpp *.cc *.h *.hpp) 

add_library(${PROJECT_NAME} SHARED ${SRCS})

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes/ )

target_compile_definitions(${PROJECT_NAME}  PUBLIC ${PROJECT_NAME})


find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2main SDL2::SDL2-static)

find_package(sdl2-image CONFIG REQUIRED)    
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2_image)