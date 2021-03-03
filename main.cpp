
#include <iostream>
#include <vector>
#include <exception>

#include "GoSheepGo/GoSheepGo.hh"

int main(int argc, char* argv[])
{
    try{
        program(argc, argv);

    }
    catch(std::exception &error){
        std::cout << error.what() << std::endl;
        return 1;
    }
    return 0;
}