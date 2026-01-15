// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.
#include <bits/stdc++.h>
using namespace std;

void setZero(vector<vector<int>>& mat){
    if(mat.empty()){
        return;
    }
    int r = mat.size();
    int c = mat[0].size();
    unordered_set<int> row;
    unordered_set<int> col;

    for(int i = 0 ; i< r ; i++){
        for(int j = 0 ; j <c ;j++){
            if(mat[i][j] == 0){
                row.insert(i);
                col.insert(j);
            }
        }
    }

    for(int i = 0 ; i< r ; i++){
        for(int j = 0 ; j< c ;j++){
            if(row.find(i) != row.end() || col.find(j) != col.end()){
                mat[i][j] = 0;
            }
        }
    }
}

int main(){
    vector<vector<int>> m = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int r = m.size();
    int c = m[0].size();
    setZero(m);
    for(int i = 0 ; i< r ; i++){
        for(int j = 0 ; j< c ;j++){
            cout<<m[i][j]<<"    ";
        }
        cout<<endl;
    }

}