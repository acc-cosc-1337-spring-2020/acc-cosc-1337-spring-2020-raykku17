//bank_account.h
class BankAccount
{
public: //Available to anyone
	BankAccount(int b) : balance{ b } { }   //must be named the same as class; 
											//the last curly brace is necessary because it is a function implentation 
											//although there is nothing in there, they tell the program what it is
	int get_balance() const { return balance; } //assures that the function cannot be modified
	void deposit(int amount);
	void withdraw(int amount);

private: //Cannot be easily changed; "balance" is accessible to any variable in the function whether it comes before or after it
	int balance;


};