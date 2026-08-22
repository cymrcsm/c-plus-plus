#include <iostream>

typedef double decimal;

namespace MathConstants {
    const decimal pi = 3.14159;
}

namespace Geometry {
    using namespace MathConstants;

    decimal C(int r) {
        return 2 * pi * r;   //circumference of a circle
    }
    decimal rad(decimal C){
        return C / (2 * pi); //radius of a circle
    }
    decimal d(int r){
        return 2 * r;        //diameter of a circle
    }
}

int main() {
    using std::cout;
    using std::endl;
    using namespace Geometry;

    int r = 5;

    cout << "Circumference of a circle if radius is 5       : " << C(r) << endl;
    cout << "Radius of a circle if circumference is " << C(r) << " : " << rad(C(r)) << endl; 
    cout << "Diameter of a circle if radius is 5            : " << d(r) << endl;

    return 0;
}
