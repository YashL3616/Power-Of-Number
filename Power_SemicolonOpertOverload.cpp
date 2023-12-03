/semicolon overloading with modification
#include <iostream>

using namespace std;

class Power {
public:
    double base;
    int exponent;

    Power(double b, int e) : base(b), exponent(e) {}

    double calculate() {
        double result = 1;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    }
};

class Semicolon {
public:
    Semicolon& operator/ (const Semicolon& other) {
        cout << " / ";
        return *this;
    }
};

int main() {
    double base;
    int exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    Power power(base, exponent);
    double result = power.calculate();

    cout << "Power of " << base << " to the exponent " << exponent << " is " << result << endl;

    Semicolon a, b, c;
    a / b / c;

    return 0;
}
