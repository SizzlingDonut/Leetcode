#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int arrsum = 0;
    int largest = nums[0];
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        arrsum += nums[i];
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    int sum = ((n) * (n + 1)) / 2;

    return sum - arrsum;
}

int main(){
    vector<int>nums = {9,6,4,2,3,5,7,0,1};
    int result = missingNumber(nums);
    cout << result << endl;

    return 0;
}