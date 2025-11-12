#include<bits/stdc++.h>
using namespace std;

/*
    7 1 5 3 6 4
*/

int maxProfit(std::vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < buy) {
            buy = prices[i];
        } else if (prices[i] - buy > profit) {
            profit = prices[i] - buy;
        }
    }
    return profit;
}

int main(){
    vector<int>ans = {7,6,4,3,1};
    int soln = maxProfit(ans);
    cout << soln << endl;

    return 0;
}