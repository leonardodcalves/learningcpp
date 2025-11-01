#include <iostream>
#include <cmath>

int main() {
  // Quadratic Formula
  // ax²+bx+c = 0
  
  // Designate a, b and c;
  double a;
  double b;
  double c;
  
  // Request input for a, b and c
  std::cout << "==========\nEnter a:\n\n";
  std::cin >> a;

  std::cout << "==========\nEnter b:\n\n";
  std::cin >> b;

  std::cout << "==========\nEnter c:\n\n";
  std::cin >> c;

  if (a == 0) {
    std::cout << "==========\nThis is not a quadratic equation.\n";
  } else {
  // Outputs the quadratic formula
  std::cout << "==========\nYour equation looks like this: \n==========\n(" << a << ")x² + (" << b << ")x + (" << c << ")\n==========\n";
  
  // Designate the roots
  double root1;
  double root2;
  double discriminant = (b*b - 4*a*c);
  if (discriminant >= 0) {

    // Calculates the roots
    root1 = (-b + std::sqrt(discriminant)) / (2*a);
    root2 = (-b - std::sqrt(discriminant)) / (2*a);

    // Outputs the results
    std::cout << "The roots for this quadratic equation are: \n X1 = " << root1 << "\n X2 = " << root2 << "\n";
  } else {

    std::cout << "==========\n1The equation has complex roots\n";
  }}

  return 0;
  }