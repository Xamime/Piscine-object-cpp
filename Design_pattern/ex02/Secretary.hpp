#pragma once
#include "Staff.hpp"
#include "FormType.hpp"

class Form;

class Secretary : public Staff
{
private:

public:
	Secretary(std::string name) : Staff(name) {}
	Form* createForm(FormType p_formType); 
};