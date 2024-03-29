#include <iostream>
#include <string>
using namespace std;

int inverseNumber(int num) {
    string numStr = to_string(num); // Convert number to string
    string inverseStr(numStr.size(), '0'); // Initialize inverse string with zeros

    // Create an inverse string by assigning digits in correct order
    for (int i = 0; i < numStr.size(); ++i) {
        inverseStr[numStr[i] - '1'] = '0' + i + 1; // Assign value at the correct index
    }

    // Convert inverse string back to integer
    int inverseNum = stoi(inverseStr);
    return inverseNum;
}

int main() {
    int num = 32145;
    int inverse = inverseNumber(num);
    cout << "Inverse of " << num << " is " << inverse << endl;

    return 0;
}
