#include <iostream>
#include <vector>
using namespace std;
vector<long long> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<long long> output(n, 1);
    long long prefix = 1;
    for (int i = 0; i < n; ++i) {
        output[i] *= prefix;
        prefix *= nums[i];
    }
    
    long long suffix = 1;
    for (int i = n - 1; i >= 0; --i) {
        output[i] *= suffix;
        suffix *= nums[i];
    }
    
    return output;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    vector<long long> result = productExceptSelf(arr);
    
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}