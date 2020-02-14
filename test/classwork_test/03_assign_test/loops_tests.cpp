#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Function for factorials")
{
	REQUIRE(loop_function(3) == 6);
	REQUIRE(loop_function(4) == 24);
	REQUIRE(loop_function(5) == 120);
}