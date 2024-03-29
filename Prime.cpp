#include <iostream>
#include <vector>

using namespace std;

bool isBostonNumber(int n) {
  // Find all prime factors of n.
  vector<int> primeFactors;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      primeFactors.push_back(i);
      n /= i;
    }
  }
  if (n > 1) {
    primeFactors.push_back(n);
  }

  // Calculate the sum of digits of n.
  int sumOfDigits = 0;
  while (n > 0) {
    sumOfDigits += n % 10;
    n /= 10;
  }

  // Calculate the sum of digits of the prime factors.
  int sumOfPrimeFactorDigits = 0;
  for (int primeFactor : primeFactors) {
    while (primeFactor > 0) {
      sumOfPrimeFactorDigits += primeFactor % 10;
      primeFactor /= 10;
    }
  }

  // Return true if the sum of digits of n is equal to the sum of digits of the prime factors.
  return sumOfDigits == sumOfPrimeFactorDigits;
}

int main() {
  int n;
  cin >> n;

  if (isBostonNumber(n)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}