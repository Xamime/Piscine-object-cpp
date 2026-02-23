#pragma once
#include <iostream>
#include "FormType.hpp"

class Form
{
private:
	FormType _formType;
	bool _signed;
	std::string _signedBy;
	friend class SignFormCommand;
protected:
		bool _isFilled;
public:
	Form(FormType p_formType) : _formType(p_formType), _signed(false), _signedBy(""), _isFilled(false) {}
	virtual ~Form() {}
	virtual void execute() = 0;
	FormType& getFormType() {
		return _formType;
	}
	void print() {
		std::cout << "Form signed : " << _signed << "\nby : " << _signedBy << std::endl;
	}
	bool isFilled() {
		return _isFilled;
	}
};