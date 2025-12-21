#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size()-1;
    int ans = nums.size();
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] >= target){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size()-1;
    int ans = nums.size();
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] > target){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

vector<int>searchRange(vector<int>& nums, int target){
    if(nums.size()==0){
        return {-1, -1};
    }

    int lb = lowerBound(nums, target);
    if(lb!=nums.size() && (nums[lb]==target)){
        int ub = upperBound(nums, target);
        return {lb, ub-1};
    }else{
        return {-1, -1};
    }
}

int main(){
    vector<int>nums = {};
    int target = 0;
    vector<int>soln = searchRange(nums, target);
    for(auto it : soln){
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}