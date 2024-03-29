#include <iostream>
using namespace std;
int invert(int a){
    int res =0;
    int multl = 1;
    if(a==0){
        return a;
    }

    while(a>0){
        int digit = a%10;
        if(digit>9-digit){
            digit = 9-digit;

        }
        res += digit*multl;
        a /=10;
        multl *=10;
    }
    return res;
}
int main(){
    int a;
    cin>>a;
    cout<<invert(a);
    
return 0;
}