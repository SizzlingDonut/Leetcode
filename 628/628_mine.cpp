#include<bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int neg=0, pos=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<0){
            neg++;
        }else if(nums[i]>0){
            pos++;
        }
    }

    int ans = 1;

    if(neg >= 2){
        ans = max((nums[0] * nums[1] * nums[n-1]), (nums[n-1] * nums[n-2] * nums[n-3]));
    }else{
        ans *= (nums[n-1] * nums[n-2] * nums[n-3]);
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,3};
    int soln = maximumProduct(nums);
    cout << soln << endl;
    
    return 0;
}