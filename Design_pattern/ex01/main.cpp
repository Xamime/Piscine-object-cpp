#include "singetons.hpp"
#include "Student.hpp"
#include "Room.hpp"
#include "Course.hpp"
#include "Staff.hpp"

int main() {
    Student jhon("Jhon");
    Student ben("ben");
    Student molly("molly");
    Staff toto("toto");
    Room room(35);
    Course math("math");

    List<Student>& studs = List<Student>::getInstance();
    List<Room>& roomlist = List<Room>::getInstance();
    List<Staff>& stafflist = List<Staff>::getInstance();
    List<Course>& courselist = List<Course>::getInstance();

    
    studs.add(&jhon);
    studs.add(&ben);
    studs.add(&molly);
    
    roomlist.add(&room);
    stafflist.add(&toto);
    courselist.add(&math);
    // we can see now that s and studs use the same instance
    List<Student>& s = List<Student>::getInstance();

    std::cout << courselist.getAll().size() << std::endl;
    for (std::list<Student*>::iterator it = s.getAll().begin(); it != s.getAll().end(); it++) {
        std::cout << (*it)->getName() << std::endl;
    }
    return 0;
}