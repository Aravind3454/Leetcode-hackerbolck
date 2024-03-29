#include <iostream>
#include <string>
using namespace std;

char findMaxFrequencyChar(string S) {
    int freq[256] = {0};  
    for (char c : S) {
        freq[c]++;
    }
    int maxFreq = 0;
    char maxFreqChar = '\0';
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxFreqChar = char(i);
        }
    }

    return maxFreqChar;
}

int main() {
    string S ;
    cin>>S;
    cout <<findMaxFrequencyChar(S);
    
    return 0;
}