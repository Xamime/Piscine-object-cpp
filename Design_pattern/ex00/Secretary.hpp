#pragma once
#include "Staff.hpp"
#include "Form.hpp"
#include "FormType.hpp"

class Secretary : public Staff
{
private:

public:
	Form* createForm(FormType p_formType);
	void archiveForm();
};