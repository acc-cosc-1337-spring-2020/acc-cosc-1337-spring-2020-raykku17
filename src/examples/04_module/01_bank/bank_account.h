//bank_account.h
#include <string>
#include <iostream>

#ifndef BANK_ACCOUNT_H       //The test cases fail otherwise because it attempts to run bank account and check twice since theres an inheritance present
#define BANK_ACCOUNT_H

class BankAccount
{
public: //Available to anyone
	BankAccount() = default;        //This is a class with no parameters
	explicit BankAccount(int b) : balance{ b } { }   //THIS IS THE CONSTRUCTOR; must be named the same as class; 
											//the last curly brace is necessary because it is a function implentation 
											//although there is nothing in there, they tell the program what it is
	virtual int get_balance() const = 0; //assures that the function cannot be modified; is read only
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() const{ return rate; }
	friend void display_balance(const BankAccount& b); //also considered a free function rather than a class function
	friend std::ostream& operator<<(std::ostream& out, const BankAccount& b);
	friend std::istream& operator>>(std::istream& in, BankAccount& b);


protected:
	int balance{ 0 };       //allows checking account to have access to it while still protecting(hiding) it from the main function


private: //Cannot be easily changed; "balance" is accessible to any variable in the function whether it comes before or after it
	
	const int min_balance_to_open{ 25 };
	static double rate;  //exists in the class but it is not part of it
	static double init_rate() { return .025; }  //used to give value to a static variable
};

#endif


#ifndef INVALID_H
#define INVALID_H

class Invalid
{
public:
	Invalid(std::string msg) : message { msg } {}
	std::string get_error() const{ return message; }
private:
	std::string message;
};
#endif