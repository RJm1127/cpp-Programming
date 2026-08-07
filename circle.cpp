#include <iostream>
#include <cmath> 
using namespace std;

class Circle {
private:
    double radius; 

public:

    Circle(double r) {
        radius = r;
    }

    double getArea() {
        return M_PI * radius * radius;
    }

    double getCircumference() {
        return 2 * M_PI * radius;
    }
};

int main() {
    double userRadius;

    cout << "Enter the radius of the circle: ";
    cin >> userRadius;

    Circle myCircle(userRadius);

    cout << "\n--- Circle Properties ---" << endl;
    cout << "Area: " << myCircle.getArea() << endl;
    cout << "Circumference: " << myCircle.getCircumference() << endl;

    return 0;
}

