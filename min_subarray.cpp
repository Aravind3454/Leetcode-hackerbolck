#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution{
    public:
        int min_subarray(vector <int>& num ){
            int over_min = INT_MAX;
            int sum = 0;
            for(int i=0;i<num.size();i++){
                sum += num[i];
                over_min = min(over_min,sum);
                if(sum>0){
                    sum = 0;
                }
            }
            return over_min;
        }
};
int main(){
    vector<int> num = {2,-1,3,4};
    Solution.min_subarray(vector<int> num);
    
return 0;
}