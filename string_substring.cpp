#include <iostream>
#include<string>
using namespace std;
void substring(string str){
    string stt;
    for(int i=0;i<str.length();i++){
        for(int j=0;j<str.length();j++){
            if(i<=j){
                stt = str[i+j];
                cout<<stt;
                cout<<endl;
            }
        }
    }
}
int main(){
    string str;
    cin>>str;
    substring(str);
    
    
return 0;
}
// abbat