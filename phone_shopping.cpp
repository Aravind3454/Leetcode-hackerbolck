#include <iostream>
using namespace std;

void smart_phone(int M, int N) {
    int aay = 0;
    int har = 0;
    for (int i = 1; i <= min(M, N); i += 2) {
        aay += i;
        har += i + 1;
        if (aay > M) {
            cout << "Harshit\n";
            return; // After printing the result, exit the function
        }
        if (har > N) {
            cout << "Aayush\n";
            return; // After printing the result, exit the function
        }
    }
}

int main() {
    int T;
    cin >> T;
    int M[T][2];
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 2; j++) { // Fixed the loop condition
            cin >> M[i][j];
        }
        smart_phone(M[i][0], M[i][1]); // Pass the values to the function smart_phone
    }
    return 0;
}
