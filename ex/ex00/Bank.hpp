#ifndef BANK_HPP
#define BANK_HPP
#include <iostream>
#include <vector>
#include "Account.hpp"

using namespace std;

class Bank
{
	double liquidity;
	std::vector<Account *> clientAccounts;
    
    int createAccountId() const
    {
        int id = 0;
        if (!clientAccounts.empty())
            id = clientAccounts.back()->id + 1;
        return (id);
    }

	public:
	Bank() : liquidity(0) {}

    ~Bank() {
        for (vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it) {
            delete *it;
        }
        clientAccounts.clear();
    }
    
    void deposit(Account *account, const double amount) {
        if (amount > 0) {
            account->value += amount - (amount / 100 * 5);
            liquidity += amount / 100 * 5;
        }
        else
            std::cout << "Deposit amount must be positive." << std::endl;
    }

    void deleteAccount(Account *account) {
        for (vector<Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it) {
            if ((*it)->id == account->id) {
                clientAccounts.erase(it);
                delete account;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }

    void loan(Account *account, const double amount) {
        if (amount <= 0)
            std::cout << "Loan amount must be positive." << std::endl;
        else if (amount > liquidity)
            std::cout << "Bank has insufficient liquidity for this loan." << std::endl;
        else {
            account->value += amount;
            liquidity -= amount;
        }
    }

	Account *createAccount()
	{
		Account *newAccount = new Account();
		newAccount->id = createAccountId();
		clientAccounts.push_back(newAccount);
		return (newAccount);
	}

	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
	{
		p_os << "Bank informations : " << std::endl;
		p_os << "Liquidity : " << p_bank.liquidity << std::endl;
		for (vector<Account*>::const_iterator it = p_bank.clientAccounts.begin(); it != p_bank.clientAccounts.end(); ++it)
            p_os << **it << std::endl;
		return (p_os);
	}
};

#endif