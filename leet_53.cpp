#include <iostream>
#include<
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int over_max = INT_MIN;
        int curr_sum = 0;
        for(int i =0;i<nums.size();i++){
            curr_sum += nums[i];
            over_max = max(over_max,curr_sum);
            if(curr_sum<0){
                curr_sum = 0;
            }
        }
        return over_max;
    }
};
int main(){

    return 0;
}