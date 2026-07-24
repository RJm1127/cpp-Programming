#include <iostream>

using namespace std;

int main() {
    double length, width, area, perimeter;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "\n--- Results ---" << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}

