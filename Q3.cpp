#include <iostream>

using namespace std;

int main() {
 
    int num1, num2;


    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

  
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    

    cout << "\n--- Results ---"<< endl;
    cout << "Addition (" << num1 << " + " << num2 << ")        = " << sum << endl;
    cout << "Subtraction (" << num1 << " - " << num2 << ")     = " << diff << endl;
    cout << "Multiplication (" << num1 << " * " << num2 << ")  = " << prod << endl;

   
    if (num2 != 0) {
       
        float div = (float)num1 / num2; 
        int mod = num1 % num2;

        cout << "Division (" << num1 << " / " << num2 << ")       = " << div << endl;
        cout << "Modulus/Remainder (" << num1 << " % " << num2 << ") = " << mod << endl;
    } else {
        cout << "Division / Modulus : Error! Division by zero is undefined." << endl;
    }

    return 0;
}

