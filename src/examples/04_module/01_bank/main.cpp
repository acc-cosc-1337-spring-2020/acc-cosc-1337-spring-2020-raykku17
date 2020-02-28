#include "bank_account.h"
#include <iostream>
#include <vector>
using std::cout; using std::cin;

int main()
{
	std::vector<BankAccount> accounts{BankAccount(100),
		BankAccount(200)};
	
	BankAccount account(500);
	auto balance = account.get_balance(); //This balance is different from the one in .h file
	cout << "Blance is: ";
	cout << balance;

	auto amount{ 0 };
	cout << "Enter deposit amount: " ;
	cin >> amount;
	try
	{
		account.deposit(amount);
		cout << "Balance is: " << balance;
	}
	catch(Invalid e)
	{
		cout << e.get_error() << "\n";
	}
	return 0;
}
/*using "auto" in a program allows c to determine what kind of value it is, only if the code name( such as 'num') is followed
by a {} with something in the middle. {0}=int {1.5}=double {'c'}=character and {flag}=boole
*/