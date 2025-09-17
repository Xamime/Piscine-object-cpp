#include <iostream>
#include <vector>
#include "Account.hpp"
#include "Bank.hpp"

int main()
{
	Bank bank = Bank();
	Account *accountA = bank.createAccount();
	Account *accountB = bank.createAccount();

    bank.deposit(accountA, 497);
    bank.deposit(accountA, -100);
    bank.deposit(accountB, 1000);
    
    // display account information
	std::cout << "Account : " << std::endl;
	std::cout << *accountA << std::endl;
	std::cout << *accountB << std::endl;
    
    // delete account A and create a new account C
    bank.deleteAccount(accountA);
    Account *accountC = bank.createAccount();
    bank.deposit(accountC, 97);
	bank.loan(accountB, -50);
	std::cout << " ----- " << std::endl;
    // display bank information
	std::cout << "Bank : " << std::endl;
	std::cout << bank << std::endl;

	return (0);
}
