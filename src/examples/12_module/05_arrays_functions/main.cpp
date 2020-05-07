#include "arr_functions.h"

int main() 
{
	const int SIZE = 5;
	int hours[SIZE] = { 0,10,20,30,40 };

	iterate_array(hours, SIZE);  //array does not have a sense of size, you must declare it
	
	return 0;
}