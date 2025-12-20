#include<bits/stdc++.h>
using namespace std;

/*
    1 3 5 6     low = 4, mid = 3, high = 3      target = 7
    
*/

int searchInsert(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return low;
}

int main(){
    vector<int>v = {1,3,5,6};
    int target = 7;
    int soln = searchInsert(v, target);
    cout << soln << endl;
    
    return 0;
}