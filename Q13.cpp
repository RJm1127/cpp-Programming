#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1; // Used to handle large results

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: Factorial of a negative number doesn't exist." << endl;
    } else {
        // For loop to calculate factorial
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}

