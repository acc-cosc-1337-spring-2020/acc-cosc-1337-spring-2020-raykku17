#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test is even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
}
TEST_CASE("test get generation function")
{

	REQUIRE(get_generation(2010) == "centennial");
	REQUIRE(get_generation(1990) == "millenial");
	REQUIRE(get_generation(1970) == "Generation x");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent generation");
	REQUIRE(get_generation(1000) == "Invalid year");

}
TEST_CASE("test menu function")
{
	REQUIRE(menu(0) == "invalid option");
	REQUIRE(menu(1) == "option 1");
	REQUIRE(menu(2) == "option 2");
	REQUIRE(menu(3) == "option 3");
	REQUIRE(menu(4) == "option 4");
	REQUIRE(menu(5) == "invalid option");
}