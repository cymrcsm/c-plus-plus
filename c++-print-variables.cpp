#include <iostream>

int main(){
    // Print
    std::cout << "John Doe" << std::endl;
    std::cout << "My first C++ program" << std::endl;

    //variable declaration
    //integer
    int age = 22;
    std::cout << age << std::endl;

    //double
    double price = 19.99;
    std::cout << price << std::endl;
    
    //single character
    char grade = 'A';
    std::cout << grade << std::endl;

    //boolean
    bool minor = false;
    std::cout << minor << std::endl;

    //string
    std::string name = "John Doe";
    std::cout << name << std::endl;

    std::cout << "Hello, my name is " << name << " and this is my first c++ program" << std::endl;
    std::cout << "I'm " << age << " years old" << std::endl;
    std::cout << "I'm selling my c++ codes for only " << price << "php" << std::endl;
    std::cout << "My grade in software development 3 is " << grade << std::endl;
    std::cout << "I'm still a minor: " << minor << std::endl;


    return 0;
}