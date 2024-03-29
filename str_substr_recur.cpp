#include <iostream>
#include<string>
#include<vector>
using namespace std;
// print all substrings using recursion 
void subseq(string tfr,string curr,int index){
    if(index == tfr.length()){
        if(!curr.empty()){
            cout<<curr<<endl;
            return;
        }
    }
    
    subseq( tfr, curr[index],index+1);
    subseq(tfr,curr[index],"");
}
vector<string> subb (string s){
    if(s.size()==0){
        return ;
    }
    vector<string> c_ans ;
    c_ans.push_back(s);

}
int main(){
    
    
    return 0;
}