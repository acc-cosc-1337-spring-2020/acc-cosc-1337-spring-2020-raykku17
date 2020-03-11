//checking_account.h
#include "bank_account.h"


class CheckingAccount : public BankAccount          //allows checking account to "inherit" the public items in bank account
{
public: 
	CheckingAccount() = default;
	explicit CheckingAccount(int b) : BankAccount(b) {}
	int get_balance()const { return balance * (1 + get_rate()); }                      //overwrites the get balance function from the bank account to allow checking account its own

};