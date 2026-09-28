#include <iostream>

// Lab 5 — Jesus
// CIS 5 Week 05 · Eligibility check

int main() {
  int age = 0;
  double gpa = 0.0;

  std::cout << "Age? ";
  std::cin >> age;

  std::cout << "GPA? ";
  std::cin >> gpa;

  // Thresholds: adult at 22 and honors at 3.5, matching my requirements for the honors program
  bool adult = age >= 18;
  bool honors = gpa >= 3.5;

  if (adult && honors) {
    std::cout << "Eligible for the honors program.\n";
  } else if (adult || honors) {
    std::cout << "Halfway there. One requirement met.\n";
  } else {
    std::cout << "Not eligible yet.\n";
  }

  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20

  return 0;
}
