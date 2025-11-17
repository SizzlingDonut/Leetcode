#include<bits/stdc++.h>
using namespace std;
/*
    1 0 0 0 1 0 0 1
*/

bool kLengthApart(vector<int>& nums, int k){
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            for(int j=i+1; j<=i+k && j<nums.size(); j++){
                if(nums[j] == 1){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    vector<int>nums = {0,1,1,0,1};
    bool soln = kLengthApart(nums, 2);
    if(soln){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    
    return 0;
}