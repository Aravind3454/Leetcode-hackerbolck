#include <iostream>
using namespace std;
void sort_squared_arr(int n,int arr[]){
    int squared[n];
    int hiighest_sq = n-1;
    int left = 0;
    int right = n-1;
    while (left<=right)
    {
        int left_square = arr[left] * arr[left];
        int right_square = arr[right] * arr[right];

        if(left_square>right_square){
            squared[hiighest_sq--] = left_square;
            left++;
        } 
        else{
            squared[hiighest_sq--] = right_square;
            right--;
        }

    }
    for(int i=0;i<n;i++){
        cout<<squared[i]<<" ";
    }

    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort_squared_arr(n,arr);
    
return 0;
}