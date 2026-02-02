#pragma once
#include <iostream>
#include "Person.hpp"

class Form;

class Staff : public Person
{
private:

public:
	Staff(std::string name) : Person(name) {}
    void sign(Form* p_form);
};