#include<iostream>
using std::cout;

int main() 
{

	int num = 5;
	cout << "value of num is: " << num << "adrress is: " << &num;

	int &num_ref = num;
	num_ref = 10;
	cout << "\nvalue of num is: " << num << "adrress is: " << &num;


	return 0;
}