#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to convert a number from source base to decimal
int toDecimal(int num, int base) {
    int decimal = 0;
    int multiplier = 1;
    while (num > 0) {
        int digit = num % 10;
        decimal += digit * multiplier;
        multiplier *= base;
        num /= 10;
    }
    return decimal;
}

// Function to convert a decimal number to destination base
string toDestinationBase(int decimal, int base) {
    string result = "";
    while (decimal > 0) {
        int digit = decimal % base;
        result = to_string(digit) + result;
        decimal /= base;
    }
    return result;
}

// Function to convert a number from source base to destination base
string convertBase(int num, int sourceBase, int destBase) {
    int decimal = toDecimal(num, sourceBase);
    string result = toDestinationBase(decimal, destBase);
    return result;
}

int main() {
    int sourceBase, destBase, sourceNumber;
    
    cin >> sourceBase;
    
    cin >> destBase;
    cin >> sourceNumber;

 cout<<convertBase(sourceNumber, sourceBase, destBase);
 

    return 0;
}
