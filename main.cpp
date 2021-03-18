#include <exception>
#include <iostream>
#include "GoSheepGo/GoSheepGo.hh"


int main(int argc, char* argv[])
{
    try {
        
    }
    catch(std::exception &error){
        std::cout << error.what() << std::endl;
        return 1;
    }
    return 0;
}