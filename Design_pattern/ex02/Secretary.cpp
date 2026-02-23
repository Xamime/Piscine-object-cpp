#include "Secretary.hpp"
#include "CourseFinishedForm.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "SubscriptionToCourseForm.hpp"

Form* Secretary::createForm(FormType p_formType) {
    Form* form = nullptr;
    switch (p_formType) {
        case FormType::CourseFinished:
            form = new CourseFinishedForm();
            static_cast<CourseFinishedForm*>(form)->fill("Java");
            break;
        case FormType::NeedMoreClassRoom:
            form = new NeedMoreClassRoomForm();
            static_cast<NeedMoreClassRoomForm*>(form)->fill(42);
            break;
        case FormType::NeedCourseCreation:
            form = new NeedCourseCreationForm();
            static_cast<NeedCourseCreationForm*>(form)->fill("Python");
            break;
        case FormType::SubscriptionToCourse:
            form = new SubscriptionToCourseForm();
            static_cast<SubscriptionToCourseForm*>(form)->fill("Nerdy", "C++");
            break;
        default:
            std::cerr << "Unknown Form\n";
            break;
    }
    return form;
}