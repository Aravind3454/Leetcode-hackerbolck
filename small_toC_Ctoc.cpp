#include <iostream>
#include <string>
using namespace std;

string toggleCase(string S) {
    for (char& c : S) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    
    return S;
}

int main() {
    string str;
    cin>>str;

    cout <<toggleCase(str);


    return 0;
}