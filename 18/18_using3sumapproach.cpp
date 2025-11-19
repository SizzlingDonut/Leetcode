#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    vector<vector<int>>ans;

    for(int i=0; i<nums.size(); i++){
        if(i>0 && nums[i]==nums[i-1])continue;

        for(int j=i+1; j<nums.size(); j++){
            if(j>i+1 && nums[j]==nums[j-1])continue;

            int left = j+1;
            int right = nums.size()-1;

            while(left < right){
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if(sum < target){
                    left++;
                }
                else if(sum > target){
                    right--;
                }
                else{                    
                    ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                    left++;
                    right--;
                    
                    while(left<right && nums[left]==nums[left-1])left++;
                    while(left<right && nums[right]==nums[right+1])right--;
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {1,0,-1,0,-2,2};
    vector<vector<int>>soln = fourSum(nums, 0);
    for(auto it : soln){
        for(auto it1 : it){
            cout << it1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}