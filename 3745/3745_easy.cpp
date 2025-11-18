#include<bits/stdc++.h>
using namespace std;

int maximizeExpressionOfThree(vector<int>& nums){
    sort(nums.begin(), nums.end());
    return (nums[nums.size()-1] + nums[nums.size()-2] - nums[0]);
}

int main(){
    vector<int>nums = {-2,0,5,-2,4};
    int soln = maximizeExpressionOfThree(nums);
    cout << soln << endl;
    
    return 0;
}