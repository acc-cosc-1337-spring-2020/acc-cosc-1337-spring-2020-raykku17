#include "bank_account.h"


//bank_account.cpp

void BankAccount::deposit(int amount) //the "BankAccount::" tells the program it belongs to that class
{
	if (amount > 0)
	{
		balance += amount;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > 0 && amount <= balance)
	{
		balance -= amount;

	}
}
