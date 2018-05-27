#include <iostream>
#include "catch.hpp"
#define CATCH_CONFIG_MAIN


int findFibonacci(int index) {
    if (index == 0 || index == 1) {
        return 1;
    }

    return findFibonacci(index - 1) + findFibonacci(index - 2);
}

TEST_CASE( "Find Fibonacci Number", "[fibonacci]" ) {
    REQUIRE( findFibonacci(1) == 1 );
    REQUIRE( findFibonacci(2) == 2 );
    REQUIRE( findFibonacci(3) == 3 );
    REQUIRE( findFibonacci(4) == 5 );
    REQUIRE( findFibonacci(5) == 8 );
    
}