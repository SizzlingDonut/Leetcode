#include<bits/stdc++.h>
using namespace std;

int maximizeExpressionOfThree(vector<int>& nums){
    int c = INT_MAX;
    int a = INT_MIN;
    int b = INT_MIN;
    int a_index = -1;

    for(int i=0; i<nums.size(); i++){
        c = min(c, nums[i]);
        if(nums[i] > a){
            a = nums[i];
            a_index = i;
        }
    }
    for(int i=0; i<nums.size(); i++){
        if(i==a_index) continue;
        b = max(b, nums[i]);
    }

    return a + b - c;
}

int main(){
    vector<int>nums = {-2,0,5,-2,4};
    int soln = maximizeExpressionOfThree(nums);
    cout << soln << endl;
    
    return 0;
}