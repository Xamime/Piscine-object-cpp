#include <iostream>
#include "Bank.hpp"

#define RESET		"\033[0m"
#define BLACK		"\033[30m"			/* Black */
#define RED			"\033[31m"			/* Red */

int main()
{
	// cant access private constructor and private members

	// Account account;
	// account.id = 42;
	// account.value = 1000;
	
	std::cout << RED << "create instance of Bank and instance of 2 accounts" << RESET << std::endl;
	Bank bank = Bank();
	int accountA = bank.createAccount();
	int accountB = bank.createAccount();
	int accountC = bank.createAccount();

	std::cout << RED << "3x deposit" << RESET << std::endl;
	try {
		bank.deposit(accountA, 497);
		bank.deposit(accountB, 1000);
		bank.deposit(accountC, 97);
		bank.deposit(accountA, -100);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
    
    // display account information
	try	{
		std::cout << RED << "Display accounts : " << RESET << std::endl;
		std::cout << bank[accountA] << std::endl;
		std::cout << bank[accountB] << std::endl;
		std::cout << bank[30] << std::endl;
	} catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	try	{
		bank.deleteAccount(accountA);
		bank.deleteAccount(accountA);
	} catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try {
		bank.loan(accountB, 10);
		bank.loan(accountC, 2000);
		bank.loan(accountA, -50);
	} catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	
	std::cout << " ----- " << std::endl;
    try{
		std::cout << RED << "Display Bank : " << RESET << std::endl;
		std::cout << bank << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
