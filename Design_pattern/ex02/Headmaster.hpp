#pragma once
#include <iostream>
#include "Staff.hpp"
#include <vector>

class Form;

class Headmaster : public Staff
{
private:
	std::vector<Form*> _formToValidate;
	
public:
	Headmaster(std::string name) : Staff(name) {}
	void receiveForm(Form* p_form) {
		if (p_form) {
			_formToValidate.push_back(p_form);
		}
	}
	void validateForms(); 
};