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

namespace multiply_student{
    int multiply(int students){
        return students * 2;
    }
    int multiply_4(int students){
        return students *= 4;
    }
}

namespace divide_student{
    int divide(int students){
        return students / 4;
    }
    int divide_5(int students){
        return students /= 5;
    }
}

namespace remainder_student{
    int remainder(int students){
        return students % 2;
    }
    int remainder_3(int students){
        return students %= 3;
    }
}


int main() {
    using std::cout;
    using std::endl;
    using namespace add_student;
    using namespace subtract_student;
    using namespace multiply_student;
    using namespace divide_student;
    using namespace remainder_student;

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
    cout << endl;
    cout << "===============Total Number of Students===============" << endl;
    cout << "total number of students(Section A)  : " << multiply(students) << endl;
    cout << "total number of students(Section A-D): " << multiply_4(students) << endl;
    cout << "======================================================" << endl;
    cout << endl;
    cout << "===========Total Number of Students Athletes==========" << endl;
    cout << "Section A: " << divide(students) << endl;
    cout << "Section B: " << divide_5(students) << endl;
    cout << "Section C: " << remainder_3(students) << endl;
    cout << "Section D: " << remainder(students) << endl;

    return 0;
}

