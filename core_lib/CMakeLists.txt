

file(GLOB_RECURSE SRCS src/ *.c *.cpp *.cc *.h *.hpp) 

add_library(${PROJECT_NAME} SHARED ${SRCS})

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

target_link_libraries(${PROJECT_NAME} 
    ${PROJECT_SOURCE_DIR}/extern/SDL2/libs/libSDL2.dylib
    ${PROJECT_SOURCE_DIR}/extern/SDL2/libs/libSDL2_image.dylib
)

target_include_directories( ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes/ )


target_compile_definitions(${PROJECT_NAME}  PUBLIC ${PROJECT_NAME})