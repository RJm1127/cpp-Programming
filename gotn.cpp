#include <iostream>

class Greatest {
private:
    int num1;
    int num2;

public:

    Greatest(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
 
    void displayGreater() {
        if (num1 > num2) {
            std::cout << "The greater number is: " << num1 << std::endl;
        } else if (num2 > num1) {
            std::cout << "The greater number is: " << num2 << std::endl;
        } else {
            std::cout << "Both numbers are equal: " << num1 << std::endl;
        }
    }
};

int main() {
    int a, b;
    
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    Greatest obj(a, b);

    obj.displayGreater();

    return 0;
}

