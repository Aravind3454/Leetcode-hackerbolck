#include <iostream>
#include <stack>
#include <string>
using namespace std;

string makeBalancedParentheses(string input) {
    stack<char> stk;

    // Count the number of open and close parentheses in the input string
    int open = 0;
    int close = 0;
    for (char c : input) {
        if (c == '(') {
            open++;
        } else if (c == ')') {
            close++;
        }
    }

    // If the number of open and close parentheses is not equal, return an empty string
    if (open != close) {
        return "";
    }

    string result = "";

    // Process the input string
    for (char c : input) {
        if (c == '(') {
            stk.push(c);
            result += c; // Include '(' in the result
        } else if (c == ')') {
            if (!stk.empty()) {
                stk.pop();
                result += c; // Include ')' in the result
            }
        } else {
            result += c; // Include non-parentheses characters in the result
        }
    }

    // Add the required number of closing parentheses to the result
    while (!stk.empty()) {
        result += ')';
        stk.pop();
    }

    return result;
}

int main() {
    string input = "())()(";

    string balanced = makeBalancedParentheses(input);

    if (balanced.empty()) {
        cout << "The input string does not have balanced parentheses." << endl;
    } else {
        cout << "Balanced parentheses: " << balanced << endl;
    }

    return 0;
}
