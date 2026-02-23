#include "Secretary.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "Headmaster.hpp"
int main()
{
    Secretary cat("Catherine");
    Headmaster toto("Toto");
    Form* courseFinish = cat.createForm(FormType::CourseFinished);
    Form* moreClass = cat.createForm(FormType::NeedMoreClassRoom);
    Form* createCourse = cat.createForm(FormType::NeedCourseCreation);
    Form* sub = cat.createForm(FormType::SubscriptionToCourse);

    toto.receiveForm(courseFinish);
    toto.validateForms();


    toto.receiveForm(courseFinish);
    toto.receiveForm(moreClass);
    toto.receiveForm(createCourse);
    toto.receiveForm(sub);
    toto.validateForms();

    toto.validateForms();
    toto.room();
    // courseFinish->execute();
    courseFinish->print();
    return 0;
}