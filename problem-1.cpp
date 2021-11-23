#include <iostream>

// Problem statement: https://projecteuler.net/problem=1

int main(int argv, char* argc[])
{
  // Number of multiples of 3, 5, and 15 below 1000
  int n_3 = 999 / 3;
  int n_5 = 999 / 5;
  int n_15 = 999 / 15;

  // Sum of k from k = 1 to m is m * (m + 1) / 2
  // Add up the finite series for all multiples of 3 and 5, then
  // subtract out the double counted shared multiples (15)
  int sum_3 = 3 * n_3 * (n_3 + 1) / 2;
  int sum_5 = 5 * n_5 * (n_5 + 1) / 2;
  int sum_15 = 15 * n_15 * (n_15 + 1) / 2;

  std::cout << "Solution is: " << sum_3 + sum_5 - sum_15 << std::endl;
}
