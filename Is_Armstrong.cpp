#include <iostream>
#include<cmath>
using namespace std;
bool Armstrong(int a){
    int num = a;
    int count = 0;
    int strong = 0;
    int digit = 0;
    while (num!=0)        
    {
        num /=10;
        count++;
    }
    num = a;
    while (num!=0)
    {   
        digit = num%10;
        strong +=pow(digit,count);
        num /=10; 
    }

    if(a != strong){
        return false;
    }
    return true;
    
}
int main(){
    int a;
    cin>>a;
    if(Armstrong(a)==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
return 0;
}