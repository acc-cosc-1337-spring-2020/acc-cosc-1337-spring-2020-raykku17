//cpp
#include <iostream>
#include "arrays_pointers.h"
void array_pointer()
{
	const int SIZE = 5;

	int hours[SIZE] = { 0,10,20,30,40 };
	int * hours_ptr = hours;

	std::cout <<*hours_ptr<<"\n";  //lets you see the firt number
	*hours_ptr++;  //allows you to see the next number
	std::cout << *hours_ptr << "\n";
	*hours_ptr--;  //allows you to move one back
	std::cout << *hours_ptr << "\n";
}

void array_pointer_loop()
{
	const int SIZE = 5;

	int hours[SIZE] = { 0,10,20,30,40 };
	int * hours_ptr = hours;

	for (int i = 0; i < SIZE; ++i)  //the for loop lets you see all the numbers
	{
		std::cout << *hours_ptr << "\n"; 
		*hours_ptr++;
	}

		std::cout << "\n";
	for (int i = 0; i < SIZE; ++i)
	{
		*hours_ptr--;      //lets you see them in reverse
		std::cout << *hours_ptr << "\n";
	}
}
