#include <iostream>
#include<string>
using namespace std;
bool isPalindrome(string str){
    int ii = 0;
    int j = str.length() -1;
    while (ii<j)
    {
        if(str[ii]!=str[j]){
            // cout<<"NO";
            return false;
        }
        ii++;
        j--;
    }
    return true;
}
using namespace std;
int main(){
    string str;
    cin>>str;
    // int ii = 0;
    // int j = str.length() -1;
    // while (ii<j)
    // {
    //     if(str[ii]!=str[j]){
    //         // cout<<"NO";
    //         return 0;
    //     }
    //     ii++;
    //     j--;
    // }
    // cout<<"Yes";
    if(isPalindrome(str)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
return 0;
}