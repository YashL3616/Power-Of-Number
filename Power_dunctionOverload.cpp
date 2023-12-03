#include <iostream>
#include<cmath>
using namespace std;
// Function to calculate the power of an integer
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate the power of a double
double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    // Using the integer power function
    int intBase = 2;
    int intExponent = 3;
    cout << "Power of " << intBase << " raised to the " << intExponent << " is: " << power(intBase, intExponent) << endl;

    // Using the double power function
    double doubleBase = 2.5;
    double doubleExponent = 2.0;
    cout << "Power of " << doubleBase << " raised to the " << doubleExponent << " is: " << power(doubleBase, doubleExponent) <<endl;

    return 0;
}
