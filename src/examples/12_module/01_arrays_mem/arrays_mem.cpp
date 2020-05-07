#include "arrays_mem.h"
#include <iostream>

//write code for for stack_array and display each element to screen

void stack_array()
{
	const int SIZE = 5; //make SIZE=5 so if you need to change it later, it's only one location
	int hours[SIZE];  //allocates 5 slots of memory

	for (int i = 0; i < SIZE; ++i)
	{
		hours[i] = i * 10;  //have the memory show up in main as 0,10,20,30,40
	}

	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}

	std::cout << "\n";
}

void stack_array_init()
{
	std::cout << "\n";

	const int SIZE = 5; 
	int hours[SIZE] = { 0,10,20,30,40 }; //Functions like the for loop, you provide each digit instead

	
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}
}

void stack_array_init_for_range()
{
	std::cout << "\n";

	const int SIZE = 5;
	int hours[SIZE] = { 0,10,20,30,40 }; 


	for (auto hour : hours)  //changing the for loop
	{
		std::cout << hours << "\n";
	}
}

