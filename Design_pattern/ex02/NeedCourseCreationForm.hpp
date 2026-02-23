#pragma once
#include <iostream>
#include "Form.hpp"


class NeedCourseCreationForm : public Form
{
private:
	std::string _courseTitle;
public:
	NeedCourseCreationForm() : Form(FormType::NeedCourseCreation) {}
	void execute() {
		std::cout << "Creating new course: " << _courseTitle << std::endl;
	}
	void fill(std::string courseTitle){
		_courseTitle = courseTitle;
		_isFilled = true;
	}
};