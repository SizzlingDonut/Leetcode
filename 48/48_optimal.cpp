#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=i+1; j<matrix[0].size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
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