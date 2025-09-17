
#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <iostream>

class Account
{
    int id;
	int value;
	friend class Bank;
    Account() :	id(-1),	value(0) {}
	
	public:
    friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
		{
            p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
			return (p_os);
		}
    };
#endif