#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int r = 0, p = 0;
	int & ref_r = r;

	cout << "Address of r: " << &r<<"\n";
	cout << "Value of r: " << r << "\n";
	cout << "Address of ref_r: " << &ref_r<< "\n\n";

	int* ptr_p = &p;
	cout << "Address of p: " << &p << "\n";
	cout << "Value of p: " << p << "\n";
	cout << "Address of ptr_p: " << &ptr_p << "\n\n";

	cout << "Contents(Address) of ptr_p: " << ptr_p << "\n"; // same as the address of p
	cout << "Value ptr_p points to: " << *ptr_p << "\n\n"; // what value is in that address

	*ptr_p = 15;
	cout << "Value of ptr_p points to: " << *ptr_p << "\n";
	cout << "Value of p: " << p << "\n\n";

	int* ptr = 5;


	return 0;
}