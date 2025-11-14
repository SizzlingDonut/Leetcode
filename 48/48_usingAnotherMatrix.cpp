#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>>soln(m,vector<int>(n,0));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            soln[j][n-i-1] = matrix[i][j];
        }
    }
    matrix = soln;
}

int main(){
    vector<vector<int>>matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    rotate(matrix);
    cout << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}