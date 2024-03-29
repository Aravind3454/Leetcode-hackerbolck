#include <iostream>
using namespace std;

int main(){
    int a;
    int b =0;
    cin>>a;
    for(int i=a;i>0;i--){
        b += i;
    }
    cout<<b;
    return 0;
}