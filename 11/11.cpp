#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height){
    int left = 0;
    int right = height.size() - 1;
    long long maxWater = 0;
    while(left < right){
        long long area = (min(height[left], height[right])) * (abs(left - right));
        maxWater = max(area, maxWater);
        if(height[left] < height[right]){
            left++;
        }else if(height[right] < height[left]){
            right--;
        }else{
            left++;
            right--;
        }
    }

    return (int)maxWater;
}

int main(){
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int soln = maxArea(height);
    cout << soln << endl;
    
    return 0;
}