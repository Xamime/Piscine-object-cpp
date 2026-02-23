#pragma once
#include <iostream>
#include "Person.hpp"
#include "SignFormCommand.hpp"

class Form;

class Staff : public Person
{
private:

public:
	Staff(std::string name) : Person(name) {}
};