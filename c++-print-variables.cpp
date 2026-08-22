#include <iostream>

int main(){
    //variable declaration
    //integer
    int age = 22;

    //double
    double price = 19.99;
    
    //single character
    char grade = 'A';

    //boolean
    bool minor = false;

    //string
    std::string name = "John Doe";
    std::string sentence = "this is my first c++ program";

    //Print
    std::cout << "Hello, my name is " << name << " and " << sentence << std::endl;
    std::cout << "I'm " << age << " years old" << std::endl;
    std::cout << "I'm selling my c++ codes for only " << price << "php" << std::endl;
    std::cout << "My grade in software development 3 is " << grade << std::endl;
    std::cout << "I'm still a minor: " << minor << std::endl;


    return 0;
}