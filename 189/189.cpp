//LEETCODE 189 - ROTATE ARRAY

#include<bits/stdc++.h>
using namespace std;

/*
    o => 1 2 3 4 5 6 7
    4 => 4 5 6 7 1 2 3
*/

void rotate(vector<int>& nums, int k){
    int n = nums.size();
    k = k%n;
    vector<int> temp(k);
    for(int i=0; i<k; i++){
        temp[i] = nums[i+n-k];
    }
    for(int i=n-1; i>=k; i--){
        nums[i] = nums[i-k];
    }
    for(int i=0; i<k; i++){
        nums[i] = temp[i];
    }
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 4);
    for(auto it : nums){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}