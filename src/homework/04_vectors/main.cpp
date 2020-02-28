#include "vectors.h"
#include <iostream>
using std::cout; using std::cin;
using std::string;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int choice1;
	char choice2;
	char y;
	vector<int>max{ 8, 4, 20, 88, 66, 99 };
	int num;
	do
	{
		cout << "Enter 1 for Max Number; 2 for Prime of numbers: ";
		cin >> choice1;
		switch (choice1)

		{
		case 1:
		{
			cout << "For values: ";
			for (int i = 0;i < max.size();i++)
			{
				cout << max[i] << (' ');
			}
			cout << "The max number is: ";
			cout << get_max_from_vector(max) << '\n';
			
		}
		break;
		case 2:
		{
			cout << "Enter number: ";
			cin >> num;
			cout << "The primes are: ";
			
			for (int i : vector_of_primes(num))
			{
				std::cout << i << ", ";
			}

		}
		break;
		default:
			cout << "Invalid Input, Please press 1 or 2" << "\n\n";
		}

		cout << "Continue?(y)" << "\n\n";
		cin >> choice2;
	} while (choice2 == 'y' || choice2 == 'Y');


	system("PAUSE");

	return 0;
}