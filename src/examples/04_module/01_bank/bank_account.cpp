#include "bank_account.h"


//bank_account.cpp

void BankAccount::deposit(int amount) //the "BankAccount::" tells the program it belongs to that class
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		throw Invalid("Amount must be greater than 0.");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount < 0)
	{
		throw Invalid("Amount must be greater than 0.");

	}
	else if (amount > balance)
	{
		throw Invalid("Insifficient Funds");
	}
	else
	{
		
		balance -= amount;
	}
}
