#include <iostream>

using namespace std;

string full_name;
int age;
string date_of_birth;
string gender;
string address;
long long contact_number_1;
string email;

string student_id;
string course;
string major;
int year_level;
string section;
string school;

string emergency_contact_name;
string relationship_to_student;
long long contact_number_2;

int main(){
    cout << "=================Personal Information=================" << endl;
    cout << "Enter your full name          : ";
    getline(cin, full_name);
    cout << "Enter your age                : ";
    cin >> age;
    cin.ignore();
    cout << "Enter your date of birth      : ";
    getline(cin, date_of_birth);
    cout << "Enter your gender             : ";
    getline(cin, gender);
    cout << "Enter your address            : ";
    getline(cin, address);
    cout << "Enter your contact number     : +63";
    cin >> contact_number_1;
    cin.ignore();
    cout << "Enter your email address      : ";
    getline(cin, email);
    cout << "=================Academic Information=================" << endl;
    cout << "Enter your student ID         : ";
    getline(cin, student_id);
    cout << "Enter your course             : ";
    getline(cin, course);
    cout << "Enter your major              : ";
    getline(cin, major);
    cout << "Enter your year level         : ";
    cin >> year_level;
    cin.ignore();
    cout << "Enter your section            : ";
    getline(cin, section);
    cout << "Enter your school             : ";
    getline(cin, school);
    cout << "=============Emergency Contact Information============" << endl;
    cout << "Enter emergency contact name  : ";
    getline(cin, emergency_contact_name);
    cout << "Enter relationship to student : ";
    getline(cin, relationship_to_student);
    cout << "Enter contact number          : +63";
    cin >> contact_number_2;
    cin.ignore();


    cout << "====================Personal Information====================" << endl;
    cout << "Full Name                : " << full_name << endl;
    cout << "Age                      : " << age << endl;
    cout << "Date of Birth            : " << date_of_birth << endl;
    cout << "Gender                   : " << gender << endl;
    cout << "Address                  : " << address << endl;
    cout << "Contact Number           : " << contact_number_1 << endl;
    cout << "Email Address            : " << email << endl;
    cout << "====================Academic Information====================" << endl;
    cout << "Student ID               : " << student_id << endl;
    cout << "Course                   : " << course << endl;
    cout << "Major/Specialization     : " << major << endl;
    cout << "Year level               : " << year_level << endl;
    cout << "Section                  : " << section << endl;
    cout << "School/University        : " << school << endl;
    cout << "================Emergency Contact Information===============" << endl;
    cout << "Emergency Contact Name   : " << emergency_contact_name << endl;
    cout << "Relationship to Student  : " << relationship_to_student << endl;
    cout << "Emergency Contact Number : " << contact_number_2 << endl;


    return 0;
}