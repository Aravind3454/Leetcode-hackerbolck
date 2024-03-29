#include <iostream>
#include <vector>
using namespace std;

void printAllCombinations(int n, vector<int>& steps, vector<int>& current) {
    if (n == 0) {
        for (int i = 0; i < current.size(); ++i) {
            cout << current[i];
            if (i != current.size() - 1)
                cout << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < steps.size(); ++i) {
        if (n - steps[i] >= 0) {
            current.push_back(steps[i]);
            printAllCombinations(n - steps[i], steps, current);
            current.pop_back();
        }
    }
}

int main() {
    int n ; // Number of stairs
    cin>>n;
    vector<int> steps = {1, 2}; // Possible steps
    vector<int> current;
    
    printAllCombinations(n, steps, current);

    return 0;
}
