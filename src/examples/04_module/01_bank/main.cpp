#include "bank_account.h"
#include <iostream>
using std::cout; using std::cin;

int main()
{
	
	BankAccount account(500);
	auto balance = account.get_balance(); //This balance is different from the one in .h file
	cout << "Blance is: " << balance;

	auto amount{ 0 };
	cout << "Enter deposit amount: " ;
	cin >> amount;
	account.deposit(amount);
	cout << "Balance is: " << balance;

	return 0;
}
/*using "auto" in a program allows c to determine what kind of value it is, only if the code name( such as 'num') is followed
by a {} with something in the middle. {0}=int {1.5}=double {'c'}=character and {flag}=boole
*/