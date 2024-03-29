#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> duplicates;

    // Cyclic sort to place each element at its correct index
    int i = 0;
    while (i < nums.size()) {
        int correctIndex = nums[i] - 1;
        if (nums[i] != nums[correctIndex]) {
            // Swap the elements
            swap(nums[i], nums[correctIndex]);
        } else {
            // Move to the next element if it's already at its correct index
            i++;
        }
    }

    // Find duplicates
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i + 1 && nums[i] != -1) {
            if (find(duplicates.begin(), duplicates.end(), nums[i]) == duplicates.end()) {
                duplicates.push_back(nums[i]);
            }
            // Mark as visited
            nums[i] = -1;
        }
    }

    return duplicates;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    // Input
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Finding duplicates
    vector<int> result = findDuplicates(nums);

    // Output
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}