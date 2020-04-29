//
//TODO 7 add template
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <cstddef>
#include <stddef.h>
/*
Rule of 3 of for c++ 98
*/
class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor - Rule of 3
	Vector& operator = (const Vector& v); //copy assignment - rule of 3
	Vector(Vector&& v); //move constructor - Part of Rule of 5 - c++11
	Vector&operator=(Vector&& v);//move assignment - Rule of 5 for c++ 11
	size_t Size() const { return size; }
	int& operator[](int i) { return nums[i]; } 
	int& operator[](int i) const { return nums[i]; }
	~Vector(); //destructor - rule of 3
private:
	size_t size;
	int* nums;
};

#endif // !MY_VECTOR_H


//Does not belong to class
//free function
void use_vector();

Vector get_vector();