#include "checking_account.h"
#include "savings_account.h"
#include <iostream>
#include <vector>
#include <memory>

using std::cout;using std::cin;
using std::unique_ptr; using std::make_unique;

int main()
{
	//c++ 11
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(90);
	unique_ptr<BankAccount> c = make_unique <CheckingAccount>(100);
	
	std::vector<unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));
	
	for (auto &act : accounts)
	{
		cout << act->get_balance() << "\n";
	}

	/*BankAccount account(500);
	cin >> account;
	cout << account;
	
	display_balance(account);
	auto balance = account.get_balance(); //This balance is different from the one in .h file
	cout << "Balance is: ";
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
	}*/
	return 0;
}
/*using "auto" in a program allows c to determine what kind of value it is, only if the code name( such as 'num') is followed
by a {} with something in the middle. {0}=int {1.5}=double {'c'}=character and {flag}=boole
*/