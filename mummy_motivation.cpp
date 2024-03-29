#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string opi = "true"; 
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j <= i){
                if (arr[i][j] == 0){
                    opi = "false";
                    break; 
                }
            }
            else{
                if (arr[i][j] != 0){
                    opi = "false";
                    break; 
                }
            }
        }
        if (opi == "false"){
            break; 
        }
    }
    cout<<opi;

    return 0;
}