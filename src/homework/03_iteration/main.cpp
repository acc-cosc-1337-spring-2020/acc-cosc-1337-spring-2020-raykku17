//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cout; using std::cin;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/

int main() 
{
	int choice1;
	char choice2;
	char y;
	string dna;

	do
	{

		cout << "Enter DNA strand: ";
		cin >> dna;
		cout << "Enter 1 for GC content; 2 for DNA complement: ";
		cin >> choice1;
		switch (choice1)
			
			{
			case 1:
			{
				cout << "The GC content is: ";
				cout<< get_gc_content(dna)<<'\n';
			}
			break;
			case 2:
			{
				cout << "The DNA Complement is: " << get_dna_complement(dna) << "\n\n";
			}
			break;
			}
		cout << "Continue?(y)" << "\n\n";
		cin >> choice2;
	} while (choice2 == 'y'||choice2=='Y');
	
	
	system("PAUSE");
	return 0;
}