#include <iostream>
#include <string>
using namespace std;

int expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}
string longestPalindrome(string s) {
    if (s.empty()) {
        return "";
    }

    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++) {
        int len1 = expandAroundCenter(s, i, i); // For odd length palindromes
        int len2 = expandAroundCenter(s, i, i + 1); // For even length palindromes
        int len = max(len1, len2);

        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }

    return s.substr(start, end - start + 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = longestPalindrome(input);
    cout << "Longest palindromic substring: " << result << endl;

    return 0;
}