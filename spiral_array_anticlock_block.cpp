#include <iostream>
using namespace std;
int main(){
 int m,n;
 cin>>m>>n;
 int arr[m][n];
 for(int i=0;i<m;i++){
    for(int j=0;j<n;++j){
        cin>>arr[i][j];
    }
 }
 int min_row = 0, max_row = m - 1, min_col = 0, max_col = n - 1;
    while (min_row <= max_row && min_col <= max_col) {
        for (int i = min_row; i <= max_row; i++) {
            cout << arr[i][min_col] << ", ";
        }
        min_col++;

        for (int j = min_col; j <= max_col; j++) {
            cout << arr[max_row][j] << ", ";
        }
        max_row--;

        if (min_col <= max_col) {
            for (int i = max_row; i >= min_row; i--) {
                cout << arr[i][max_col] << ", ";
            }
            max_col--;
        }

        if (min_row <= max_row) {
            for (int j = max_col; j >= min_col; j--) {
                cout << arr[min_row][j] << ", ";
            }
            min_row++;
        }
    }
    cout << "END";   
    
return 0;
}