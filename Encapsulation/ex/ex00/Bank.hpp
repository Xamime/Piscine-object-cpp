#ifndef BANK_HPP
#define BANK_HPP
#include <iostream>
#include <map>
using namespace std;

class Bank
{
    private:
        class Account
        {
            static int nextId;
            int id;
            double value;
            friend class Bank;

            Account() : id(nextId++),	value(0) {}
            ~Account() {}
            
            public:
            const int &getId() const { return id; }
            const double &getValue() const { return value; }
        };
        
        double liquidity;
        std::map<int, Account *> clientAccounts;
        
        public:
        
        Bank() : liquidity(0) {}
        ~Bank() {
            for (map<int, Account*>::iterator it = clientAccounts.begin(); it != clientAccounts.end(); ++it) {
                delete it->second;
            }
            clientAccounts.clear();
        }
        
        // Deposit money into account and add 5% fee to bank liquidity
        void deposit(int id, const double amount) {
            map<int,Account*>::const_iterator it = clientAccounts.find(id);
            if (it == clientAccounts.end())
                throw runtime_error("Error:deposit Account not found."); 
            if (amount <= 0) 
                throw runtime_error("Error: Deposit amount must be positive.");
            it->second->value += amount - (amount / 100 * 5);
            liquidity += amount / 100 * 5;
        }
        
        // Delete account and free memory
        void deleteAccount(int id) {
            map<int,Account*>::const_iterator it = clientAccounts.find(id);
            if (it == clientAccounts.end())
                throw runtime_error("Error:deleteAccount Account not found.");
            delete it->second;
            clientAccounts.erase(id);
        }
        
        // Provide loan to account if bank has enough liquidity
        void loan(int id, const double &amount) {
            map<int,Account*>::const_iterator it = clientAccounts.find(id);
            if (it == clientAccounts.end()) 
                throw runtime_error("Error:loan Account not found.");
            if (amount <= 0)
                throw runtime_error("Error: Loan amount must be positive.");
            else if (amount > liquidity)
                throw runtime_error("Error: Loan Not enough liquidity in bank.");
            it->second->value += amount;
            liquidity -= amount;
        }

        // Create new account and new id and return id
        int createAccount()
        {
            Account *newAccount = new Account();
            clientAccounts.insert(make_pair(newAccount->getId(), newAccount));
            return (newAccount->getId());
        }
        
        Account *operator[](size_t index) {
            map<int,Account*>::const_iterator it = clientAccounts.find(index);
            if (it == clientAccounts.end())
                throw runtime_error("Error:operator[] Account not found.");
            return clientAccounts[index];
        }
        
        friend std::ostream& operator << (std::ostream& p_os, const Account* p_account) {
            if (p_account == NULL)
                return (p_os);
            p_os << "[" << p_account->getId() << "] - [" << p_account->getValue() << "]";
            return (p_os);
        }
        friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
        {
            p_os << "Bank informations : " << std::endl;
            p_os << "Liquidity : " << p_bank.liquidity << std::endl;
            for (map<int,Account*>::const_iterator it = p_bank.clientAccounts.begin(); it != p_bank.clientAccounts.end(); ++it){
                p_os << it->second << std::endl;
            }
            return (p_os);
        }
    };
    
#endif