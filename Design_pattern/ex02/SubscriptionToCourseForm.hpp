#pragma once
#include <iostream>
#include "Form.hpp"

class SubscriptionToCourseForm : public Form
{
private:
	std::string _studentName;
    std::string _courseName;
public:
	SubscriptionToCourseForm() : Form(FormType::SubscriptionToCourse) {}
	void execute() {
		std::cout << _studentName << " is subscribed to " << _courseName << "\n";
	}
	void fill(std::string studentName, std::string courseName) {
		_studentName = studentName;
		_courseName = courseName;
		_isFilled = true;
	}
};
