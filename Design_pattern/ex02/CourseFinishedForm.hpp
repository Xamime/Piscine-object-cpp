#pragma once
#include <iostream>
#include "Form.hpp"

class CourseFinishedForm : public Form
{
private:
	std::string _courseName;
public:
	CourseFinishedForm() : Form(FormType::CourseFinished) {}
	void execute() {
		std::cout << "The course " << _courseName << " is finished\n";
	}
	void fill(std::string courseName) {
		_courseName = courseName;
		_isFilled = true;
	}
};