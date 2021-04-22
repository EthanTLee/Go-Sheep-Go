#include "catch.hpp"

#include <string>
#include <GoSheepGo/Core/GameWindow.hh>
#include <GoSheepGo/Core/Helpers.hh>


TEST_CASE("test of game window") {

core::GameWindow("spaggetti",300,200);
core::Continue_Until_Quit();

//should make a window with title spaggetti, width 300, and height 200

}