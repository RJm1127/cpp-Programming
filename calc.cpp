#include <iostream>

class Calculator {
public:

    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    // Division
    double divide(double a, double b) {
        if (b == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }

    int modulo(int a, int b) {
        if (b == 0) {
            std::cout << "Error: Division by zero in modulo!" << std::endl;
            return 0;
        }
        return a % b;
    }
};

int main() {
    Calculator calc;
    int choice;
    double num1, num2;

    std::cout << "=== C++ Calculator ===" << std::endl;
    std::cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulo\n";
    std::cout << "Enter choice (1-5): ";
    std::cin >> choice;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (choice) {
        case 1:
            std::cout << "Result: " << calc.add(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << "Result: " << calc.subtract(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
            break;
        case 4:
            std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
            break;
        case 5:
            std::cout << "Result: " << calc.modulo(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}

