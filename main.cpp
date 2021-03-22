#include <exception>
#include <iostream>


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