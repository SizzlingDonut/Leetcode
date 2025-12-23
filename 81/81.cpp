#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target){
    bool ans = false;
    int low = 0, high = nums.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] == target){
            ans = true;
        }else if(nums[low] == nums[mid] && nums[mid] == nums[high]){
            low++, high--;
            continue;
        }
        if(nums[low] <= nums[mid]){
            if(nums[low]<=target && target<=nums[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            if(nums[mid]<=target && target<=nums[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }

    return ans;
}

int main(){
    vector<int>v = {1,0,1,1,1};
    bool soln = search(v, 0);
    cout << soln << endl;
    
    return 0;
}