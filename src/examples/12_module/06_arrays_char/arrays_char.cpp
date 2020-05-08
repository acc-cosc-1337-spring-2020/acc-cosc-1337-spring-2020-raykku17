//cpp
#include "arrays_char.h"
#include <iostream>

void char_array()
{
	const int SIZE = 5;
	char name[SIZE] = "Mary";
	name[4] = '\0';  //memory has 5 slots but mary is 4 slots, this deletes the last one
	std::cout << name << "\n\n"; //will display mary in one line
	
	for (int i = 0; name[i] != '\0'; ++i)
	{
		std::cout << name[i] << "\n";
	}
	std::cout << "\n";
}



void char_array_no_size()
{
	char name[] = "Mary";

	std::cout << name << "\n\n";
}