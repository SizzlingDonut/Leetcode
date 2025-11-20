#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>>ans;
    for(int i=0; i<n; i++){
        if(ans.empty() || intervals[i][0] > ans.back()[1]){
            ans.push_back(intervals[i]);
        }else{
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>>ans = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    vector<vector<int>>soln = merge(ans);
    for(auto it : soln){
        for(auto it1 : it){
            cout << it1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}