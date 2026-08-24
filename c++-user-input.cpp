#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;
    using std::getline;

    string name;
    string address;
    string email;
    int age;
    string phone_number;

    cout << "==========Personal Information==========" << endl;
    cout << "Enter your full name    : ";
    getline(cin, name);
    cout << "Enter your address      : ";
    getline(cin, address);
    cout << "Enter your age          : ";
    cin  >> age;
    cout << "Enter your phone number : ";
    cin  >> phone_number;
    cout << "Enter your email address: ";
    cin  >> email;
    

    cout << "==========Personal Information==========" << endl;
    cout << "Name                : " << name << endl;
    cout << "Address             : " << address << endl;
    cout << "Age                 : " << age << endl;
    cout << "Phone Number        : " << phone_number << endl;
    cout << "Email               : " << email << endl;



    return 0;
}