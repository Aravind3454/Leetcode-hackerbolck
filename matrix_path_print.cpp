#include <iostream>
#include <vector>
using namespace std;

void printPaths(int n, int m, int i, int j, string path) {
    // If current position is out of bounds, return
    if (i >= n || j >= m) {
        return;
    }
    
    // If reached the bottom-right corner, print the path
    if (i == n - 1 && j == m - 1) {
        cout << path << endl;
        return;
    }

    // Move right
    printPaths(n, m, i, j + 1, path + "R");
    
    // Move down
    printPaths(n, m, i + 1, j, path + "D");
}

int main() {
    int n = 3; // Number of rows
    int m = 3; // Number of columns

    cout << "All paths from (0,0) to (" << n-1 << "," << m-1 << ") in a " << n << "x" << m << " matrix:" << endl;
    printPaths(n, m, 0, 0, "");

    return 0;
}
