//2.3 Power-Friend Function 
#include <iostream>
using namespace std;
class PowerCalculator {
private:
  double base;
  int exponent;
public:
  // Constructor
  PowerCalculator(double base, int exponent) : base(base), exponent(exponent) {}
  friend double calculatePowerFriend(const PowerCalculator& calculator);

  double calculatePower() {
    double result = 1.0;
    for (int i = 0; i < exponent; i++)
    {result *= base;}
    return result;
  }
};
// Friend function definition
double calculatePowerFriend(const PowerCalculator& calculator) {
  // Accessing private members from the friend function
  double base = calculator.base;
  int exponent = calculator.exponent;

  double result = 1.0;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}
int main() {
  double base;
  int exponent;
  cout << "Enter the base value: ";
  cin >> base;
  cout << "Enter the exponent value: ";
  cin >> exponent;
  PowerCalculator calculator(base, exponent);
  double power = calculatePowerFriend(calculator);
  cout << "Answer: " << power << endl;
  return 0;
}

