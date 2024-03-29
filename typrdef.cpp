#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// Function to compute the sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to check if a number is a Boston number
int isBoston(int n) {
    int sum = 0;

    // Finding prime factors of the number
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0 && isPrime(i)) {
            sum += sumOfDigits(i);
            n /= i;
        }
    }

    // Adding the sum of digits of the remaining number if it's greater than 1
    if (n > 1)
        sum += sumOfDigits(n);

    return sum == sumOfDigits(n); // Returning 1 if true, 0 if false
}

int main() {
    int num = 378;

    cout << isBoston(num) << endl;

    return 0;
}
