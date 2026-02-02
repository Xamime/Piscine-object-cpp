#pragma once
#include <iostream>
#include "Person.hpp"
#include <vector>

class Classroom;
class Course;

class Student : public Person
{
private:
	std::vector<Course*> _subscribedCourse;

public:
	Student(std::string name) : Person(name) {}
	void attendClass(Classroom* p_classroom);
	void exitClass();
	void graduate(Course* p_course);
};