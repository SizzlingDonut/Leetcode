#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int xor1 = 0, xor2 = 0;
    for(int i=0; i<n; i++){
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ i;
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}

int main(){
    vector<int>nums = {9,6,4,2,3,5,7,0,1};
    int result = missingNumber(nums);
    cout << result << endl;

    return 0;
}