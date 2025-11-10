//DUTCH NATIONAL FLAG ALGORITHM

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }else if(nums[mid]==2){
            swap(nums[mid], nums[high]);
            high--;
        }else{
            mid++;
        }
    }
}

int main(){
    vector<int> ans = {0,1,1,0,1,2,1,2,0,0,0};
    sortColors(ans);
    for(auto it : ans){
        cout << it << " ";
    }

    return 0;
}