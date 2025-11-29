#include<bits/stdc++.h>
using namespace std;

vector<int> numberGame(vector<int>& nums){
    int n = nums.size();
    vector<int>arr;

    sort(nums.begin(), nums.end());

    for(int i=0; i<n; i++){
        if(i%2==0){
            arr.push_back(nums[i+1]);
        }else{
            arr.push_back(nums[i-1]);
        }
    }

    return arr;
}

int main(){
    vector<int>nums = {5,4,2,3};
    vector<int>soln = numberGame(nums);
    for(auto it : soln){
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}