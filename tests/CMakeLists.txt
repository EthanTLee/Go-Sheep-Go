file(GLOB SRCS *.c *.cpp *.cc *.h *.hpp) 

add_executable(my_test ${SRCS})

target_link_libraries(${PROJECT_NAME} 
    ${PROJECT_SOURCE_DIR}/extern/SDL2/libs/libSDL2.dylib
    ${PROJECT_SOURCE_DIR}/extern/SDL2/libs/libSDL2_image.dylib
)

