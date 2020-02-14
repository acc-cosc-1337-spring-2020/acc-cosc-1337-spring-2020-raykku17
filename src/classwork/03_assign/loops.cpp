#include "loops.h"
#include <iostream>
/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/
using std::cout; 

int loop_function(int num1)
{
	int num = 1;
	int counter =0;
	while (counter < num1)
	{
		num = num*(counter+1);
			counter = counter + 1;
	}
	
	return num;
	
}
