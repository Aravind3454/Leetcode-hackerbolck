#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool customCompare(string a, string b) {
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

string arrangeLargestNumber(vector<int>& nums) {
    vector<string> numStrings;
    for (int num : nums) {
        numStrings.push_back(to_string(num));
    }
    sort(numStrings.begin(), numStrings.end(), customCompare);
    
    string result = "";
    for (string numStr : numStrings) {
        result += numStr;
    }
    
    return result;
}

int main() {
    int t, n;
    cin >> t; 
    while (t--) {
        cin >> n; 
        vector<int> A(n);
        
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        cout << arrangeLargestNumber(A);
    }
    
    return 0;
}