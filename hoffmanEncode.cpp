#include <iostream>
using namespace std;

const int MAX_CHAR = 256; // Assuming ASCII characters

void countCharacters(string str, int charCount[]) {
    for (char c : str) {
        charCount[c]++;
    }
}


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    int charCount[MAX_CHAR] = {0};
    countCharacters(inputString, charCount);

    for (int i = 0; i < MAX_CHAR; i++) {
        if (charCount[i] > 0) {
            cout << "Character '" << char(i) << "' occurs " << charCount[i] << " times." << endl;
        }
    }

    bubbleSort(charCount,MAX_CHAR);
    for(int i=MAX_CHAR-1;i>=0;i--){
        if(charCount[i]>0){
            cout<<charCount[i]<<" ";
        }
        }

    return 0;
}
