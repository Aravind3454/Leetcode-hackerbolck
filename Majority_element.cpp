#include <iostream>
#include <vector>

using namespace std;

vector<int> majorityElement(const vector<int>& nums) {
    vector<int> result;

    if (nums.empty())
        return result;

    int count1 = 0, count2 = 0;
    int candidate1 = 0, candidate2 = 1; // Initialize two candidates with different values

    // First pass: Find potential candidates
    for (int num : nums) {
        if (num == candidate1)
            count1++;
        else if (num == candidate2)
            count2++;
        else if (count1 == 0) {
            candidate1 = num;
            count1 = 1;
        }
        else if (count2 == 0) {
            candidate2 = num;
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }

    // Second pass: Count occurrences of potential candidates
    count1 = 0;
    count2 = 0;
    for (int num : nums) {
        if (num == candidate1)
            count1++;
        else if (num == candidate2)
            count2++;
    }

    // Check if potential candidates appear more than floor(N/3) times
    if (count1 > nums.size() / 3)
        result.push_back(candidate1);
    if (count2 > nums.size() / 3)
        result.push_back(candidate2);
    else{
        cout<<"No Majority Elements";
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    vector<int> result = majorityElement(A);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
