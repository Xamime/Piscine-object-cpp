#pragma once
#include <iostream>
#include "Form.hpp"

class NeedMoreClassRoomForm : public Form
{
private:
	int _nbStudents;
public:
	NeedMoreClassRoomForm() : Form(FormType::NeedMoreClassRoom) {}
	void execute() {
		std::cout << "Need a bigger classroom for " << _nbStudents << " students\n";
	}
	void fill(int nbStudents) {
		_nbStudents = nbStudents;
		_isFilled = true;
	}
};