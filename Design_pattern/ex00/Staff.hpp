#pragma once
#include <iostream>
#include "Form.hpp"
#include "Person.hpp"

class Staff : public Person
{
private:

public:
    void sign(Form* p_form);
};