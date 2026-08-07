#include <iostream>

class Interest {
private:
    double principle;
    double rate;
    double time;

public:
    // Constructor to initialize the values
    Interest(double p, double r, double t) {
        principle = p;
        rate = r;
        time = t;
    }

    // Function to calculate simple interest
    double calculateSI() const {
        return (principle * rate * time) / 100.0;
    }

    // Function to display details
    void display() const {
        std::cout << "Principle: " << principle 
                  << ", Rate: " << rate 
                  << "%, Time: " << time << " years" << std::endl;
        std::cout << "Calculated Simple Interest: " << calculateSI() << std::endl;
    }

    // Function to compare and display the greater interest
    void compareAndDisplayGreater(const Interest& other) const {
        double si1 = this->calculateSI();
        double si2 = other.calculateSI();

        std::cout << "\n--- Comparison Result ---" << std::endl;
        if (si1 > si2) {
            std::cout << "The first investment yields a greater interest of: " << si1 << std::endl;
        } else if (si2 > si1) {
            std::cout << "The second investment yields a greater interest of: " << si2 << std::endl;
        } else {
            std::cout << "Both investments yield the same interest: " << si1 << std::endl;
        }
    }
};

int main() {
    // Creating two objects with different principles, rates, and times
    Interest investment1(10000, 5, 2); // Principle=10000, Rate=5%, Time=2 years
    Interest investment2(5000, 12, 3); // Principle=5000, Rate=12%, Time=3 years

    std::cout << "Investment 1 Details:" << std::endl;
    investment1.display();

    std::cout << "\nInvestment 2 Details:" << std::endl;
    investment2.display();

    // Comparing which interest is greater
    investment1.compareAndDisplayGreater(investment2);

    return 0;
}

