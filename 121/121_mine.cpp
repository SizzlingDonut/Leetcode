#include<bits/stdc++.h>
using namespace std;

/*
    7 1 5 3 6 4
*/

int maxProfit(vector<int>& prices){
    int left = prices[0];
    int right = prices[0];
    int profit = 0;
    for(int i=0; i<prices.size(); i++){
        if(prices[i] < left){
            left = prices[i];
            right = prices[i];
        }
        if(prices[i] > right){
            right = prices[i];
        }
        profit = max(profit, right - left);
    }
    return profit;
}

int main(){
    vector<int>ans = {7,6,4,3,1};
    int soln = maxProfit(ans);
    cout << soln << endl;

    return 0;
}