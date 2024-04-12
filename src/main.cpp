#include <iostream>
#include <cmath>
#include <limits>

double getValueInput() {
  std::cout << "Enter a double value: ";
  double x{};
  std::cin >> x;
  return x;
}

char getCharInput() {
  std::cout << "Enter +, -, * or /: ";
  char op{};
  std::cin >> op;
  return op;
}

double calculate(double a, char op, double b) {
  switch(op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default: return std::numeric_limits<double>::quiet_NaN();
  }
}

void printCalculation(double a, char op, double b, double result) {
  if (!std::isnan(result) && !std::isinf(result)) std::cout << a << ' ' << op << ' ' << b << " is " << result << '\n';
}

int main() {
  const double a{ getValueInput() };
  const double b{ getValueInput() };
  const char op{ getCharInput() };
  const double result{ calculate(a, op, b) };
  printCalculation(a, op, b, result);
  return 0;
}
