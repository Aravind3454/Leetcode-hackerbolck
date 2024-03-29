#include <iostream>
#include <string>
using namespace std;

void replaceChar(string& S) {
    for (int i = 0; i < S.size(); i++) {
        if (i % 2 == 0) {
            S[i] = char(int(S[i]) + 1);
        } else {
            S[i] = char(int(S[i]) - 1);
        }
    }
}

int main() {
    string S = "abcg";
    
    // Replace characters in the string
    replaceChar(S);
    
    // Print modified string
    cout << "Modified string: " << S << endl;
    
    return 0;
}