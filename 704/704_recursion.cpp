#include<bits/stdc++.h>
using namespace std;

int rec(vector<int>& nums, int low, int high, int target){
    if(low > high) return -1;
    int mid = (low + high) / 2;
    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return rec(nums, mid+1, high, target);
    return rec(nums, low, high-1, target);
}

int search(vector<int>& nums, int target){
    return rec(nums, 0, nums.size()-1, target);
}

int main(){
    vector<int>nums = {-1,0,3,5,9,12};
    int target = 9;
    int soln = search(nums, target);
    cout << soln << endl;

    return 0;
}