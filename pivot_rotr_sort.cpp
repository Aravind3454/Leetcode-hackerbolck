#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left-1;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    int pivot = findPivot(nums);

    cout << "Pivot point is at index: " << pivot << endl;

    return 0;
}