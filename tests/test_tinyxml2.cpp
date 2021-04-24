#include "catch.hpp"
#include <extern/tinyxml2/tinyxml2.h>

#include <iostream>
#include <string>

using namespace tinyxml2;

TEST_CASE ("testing tiny xml") {


    XMLDocument test_doc;

    const char * path = "../../res/spritesheets/flashing_tile.spreet";

    test_doc.LoadFile(path);

    const char* name = test_doc.FirstChildElement( "spritesheet" )
        ->FirstChildElement( "animation" )->FirstChildElement("name") -> GetText();
    
    std::cout << name;
}