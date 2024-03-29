#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int num1 = -1, num2 = -1, count1 = 0, count2 = 0, size = nums.size();
    for (int i = 0; i < size; i++) {
        if (nums[i] == num1)
            count1++;
        else if (nums[i] == num2)
            count2++;
        else if (count1 == 0) {
            num1 = nums[i];
            count1 = 1;
        } else if (count2 == 0) {
            num2 = nums[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }
    count1 = count2 = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == num1)
            count1++;
        else if (nums[i] == num2)
            count2++;
    }
    vector<int> res;
    if (count1 > size / 3)
        res.push_back(num1);
    if (count2 > size / 3)
        res.push_back(num2);
    sort(res.begin(), res.end());
    return res;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    vector<int> res = majorityElement(arr);
    if(res.size() == 0) {
        cout << "No Majority Elements" << endl;
    } else {
        for(int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}