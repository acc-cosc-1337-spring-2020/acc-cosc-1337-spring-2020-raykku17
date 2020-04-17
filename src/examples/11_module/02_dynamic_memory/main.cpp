#include <iostream>

using std::cout;

int main()
{
	int* ptr_num = new int(5); //new is required to create dynamic memory

	cout << "Address of ptr_num: " << &ptr_num << "\n";
	cout << "Address ptr_num points to: " << ptr_num << "\n";
	cout<<"Value at address ptr_num points to: "<<*ptr_num<<"\n\n";

	delete ptr_num; //after creating memory you must delete it, its essentially cleaning up after yourself
	ptr_num = nullptr; //zeroes out ptr_num

	return 0;
}