#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int>row(n,0);
    vector<int>col(m,0);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }
}

int main(){
    vector<vector<int>>matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    setZeroes(matrix);
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}