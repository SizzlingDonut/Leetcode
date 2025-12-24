#include<bits/stdc++.h>
using namespace std;

long long func(vector<int>& piles, int n){
    long long ans = 0;
    for(int i=0; i<piles.size(); i++){
        ans += ceil((double)(piles[i]) / n);
    }
    return ans;
}

int minEatingSpeed(vector<int>& piles, int h){
    int maxElement = *max_element(piles.begin(), piles.end());
    int low = 1, high = maxElement;
    int ans = high;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(func(piles, mid) <= (long long)h){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int>piles = {3,6,7,11};
    cout << minEatingSpeed(piles, 8) << endl;
    
    return 0;
}