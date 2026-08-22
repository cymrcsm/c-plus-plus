#include <iostream>

namespace add_student{
    int add(int students){
        return students + 1;
    }
    int add_five(int students){
        return students += 6;
    } 
}

namespace subtract_student{
    int subtract(int students){
        return students - 1;
    }
    int subtract_3(int students){
        return students -= 3;
    }
}


int main() {
    using std::cout;
    using std::endl;
    using namespace add_student;
    using namespace subtract_student;

    int students = 20;

    cout << "=======1st Week of School: Students Attendance========" << endl;
    cout << "======================Section A=======================" << endl;
    cout << "08/24/26 Attendance:" << endl;
    cout << "total number of students present: " << students << endl;
    cout << "08/25/26 Attendance:" << endl;
    cout << "total number of students present: " << add(students) << endl;
    cout << "08/26/26 Attendance:" << endl;
    cout << "total number of students present: " << add_five(students) << endl;
    cout << "08/27/26 Attendance:" << endl;
    cout << "total number of students present: " << subtract(students) << endl;
    cout << "08/28/26 Attendance:" << endl;
    cout << "total number of students present: " << subtract_3(students) << endl;
    cout << "======================================================" << endl;


    return 0;
}

