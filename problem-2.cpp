#include <cmath>
#include <iostream>

// Problem statement: https://projecteuler.net/problem=2

int main(int argv, char* argc[])
{
  // Count only even fibonacci numbers
  int i = 3;
  int F_i = 0;
  int sum = 0;
  while (F_i < 4000000) {
    sum += F_i;
    // Binet's formula for nth fibonacci number
    const double phi = (1 + sqrt(5)) / 2;
    const double psi = (1 - sqrt(5)) / 2;
    F_i = (int) ((pow(phi, i) - pow(psi, i)) / sqrt(5));

    // Fibonacci series goes even, odd, odd, even, odd, odd
    i += 3;
  }

  std::cout << "Solution is: " << sum << std::endl;
}