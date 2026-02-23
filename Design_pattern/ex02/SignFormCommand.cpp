#include "SignFormCommand.hpp"
#include "Staff.hpp"
#include "Form.hpp"


void SignFormCommand::sign() {
    _form->_signed = true;
    _form->_signedBy = _staff->getName();
}