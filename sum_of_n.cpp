#include <iostream>
using namespace std;
int sum_of_n(int n){
    if(n==1){
        return 1;
    }
    int ans = n+(sum_of_n(n-1));
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<sum_of_n(n);
    
return 0;
}