#pragma once

class Form;
class Staff;

class SignFormCommand {
private:
    Form* _form;
    Staff* _staff;
public:
    SignFormCommand(Form* p_form, Staff* p_staff) : _form(p_form), _staff(p_staff) {}
    void sign(); 
};