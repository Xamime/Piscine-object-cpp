#include "Headmaster.hpp"
#include "Form.hpp"

void Headmaster::validateForms() {
    for (auto it = _formToValidate.begin(); it != _formToValidate.end(); it++) {
        if ((*it)->isFilled() == true) {
            SignFormCommand cmd(*it, this);
            cmd.sign();
            (*it)->execute();
            _formToValidate.erase(it);
            it--;
        }
    }
}