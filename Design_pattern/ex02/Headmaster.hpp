#pragma once
#include <iostream>
#include "Staff.hpp"

class Form;

class Headmaster : public Staff
{
private:
	std::vector<Form*> _formToValidate;
	
public:
	void receiveForm(Form* p_form);
};