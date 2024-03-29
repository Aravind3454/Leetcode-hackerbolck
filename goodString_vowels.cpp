#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int longestGoodString(string S) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int maxLength = 0;
    int currentLength = 0;

    for (char c : S) {
        if (vowels.count(c) > 0) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 0;
        }
    }

    return maxLength;
}

int main() {
    string str;
    cin>>str;
    cout << longestGoodString(str);

    return 0;
}