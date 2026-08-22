#include <iostream>
#include <cmath>

int main(){
    const double pi = 3.14159;
    const double e = 2.71828;

    int radius = 10;
    double circumference = 2 * pi * radius;

    int P = 100;
    double r = 0.10;
    int t = 5;
    double A = P * std::exp(r * t);

    std::cout << "Circumference of a circle radius is 10: " << circumference << std::endl;
    std::cout << "Amount of bacteria after 5 hours with 10 percent hourly growth rate: " << A << std::endl;

    return 0;
}