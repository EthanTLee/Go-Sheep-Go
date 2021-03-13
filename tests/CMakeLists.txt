file(GLOB SRCS *.c *.cpp *.cc *.h *.hpp) 
find_package(Catch2 CONFIG REQUIRED)

add_executable(my_test ${SRCS})


target_link_libraries(my_test PUBLIC ${PROJECT_NAME} )
target_link_libraries(my_test PRIVATE Catch2::Catch2)

