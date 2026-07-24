#include <iostream>
#include <cmath>

using namespace std;

int main() {
 
    double radius, area, circumference;
    const double PI = 3.14159265358979323846;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * pow(radius, 2);
    circumference = 2 * PI * radius;

    cout << "\n--- Results ---" << endl;
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}

