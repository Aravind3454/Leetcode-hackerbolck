#include <iostream>
#include <string>
using namespace std;

void allCoinTossResults(int tosses, string current = "") {
    if (tosses == 0) {
        cout << current << endl;
        return;
    }

    // Include 'H' for heads
    allCoinTossResults(tosses - 1, current + 'H');

    // Include 'T' for tails
    allCoinTossResults(tosses - 1, current + 'T');
}

int main() {
    int numTosses = 3; // Number of coin tosses
    cout << "All possible outcomes of " << numTosses << " coin tosses:" << endl;
    allCoinTossResults(numTosses);
    return 0;
}
