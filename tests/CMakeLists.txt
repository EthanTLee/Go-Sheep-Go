file(GLOB SRCS *.c *.cpp *.cc *.h *.hpp) 
find_package(Catch2 CONFIG REQUIRED)

add_executable(my_test ${SRCS})
set_property(TARGET my_test PROPERTY CXX_STANDARD 20)

target_link_libraries(my_test PUBLIC ${PROJECT_NAME} )
target_link_libraries(my_test PRIVATE Catch2::Catch2)

find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(my_test PRIVATE SDL2::SDL2main SDL2::SDL2-static)

find_package(sdl2-image CONFIG REQUIRED)    
target_link_libraries(my_test PRIVATE SDL2::SDL2_image)


