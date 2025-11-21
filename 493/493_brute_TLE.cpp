#include<bits/stdc++.h>
using namespace std;

int reversePairs(vector<int>& v){
    int count = 0;
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if((long long)v[i] > (long long)2*v[j])count++;
        }
    }
    return count;
}

int main(){
    vector<int>v = {1,3,2,3,1};
    int soln = reversePairs(v);
    cout << soln << endl;
    
    return 0;
}