#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "GoSheepGo/GoSheepHelpers.hh"
#include<utility>

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "Testing not null class", "[not null]" ) {
    int i = 5;
    gosheep::__not_null__<int*> xone = &i;
    REQUIRE(xone.m_ptr == &i);

    REQUIRE_THROWS( [](){ gosheep::__not_null__<int*> xtwo (nullptr) ;}() );
    using int_pair = std::pair<int, int>;
   // REQUIRE_THROWS_AS(int_pair(1, 2), std::invalid_argument);

    
}