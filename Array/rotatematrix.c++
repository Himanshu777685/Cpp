#include<bits/stdc++.h>
using namespace std;

// ----->  BRUTE FORCE APPROACH  <--------

// void rotate(vector<vector<int>>& mat){
//     int r = mat.size();
//     vector<vector<int>> temp(r,vector<int>(r));
//     for(int i = 0 ; i<r ; i++){
//         for(int j = 0; j<r ; j++){
//             temp[i][j] = mat[i][j];
//         }
//     }

//     for(int i = 0 ; i<r ; i++){
//         for(int j = 0; j<r ; j++){
//             mat[j][r-1-i] = temp[i][j];
//         }
//     }
// }

// int main(){
//     vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
//     // rotate(m);
//     for(int i = 0 ; i< 3 ; i++){
        
//         for(int j = 0 ; j< 3 ;j++){
//             cout<<m[i][j]<<"    ";
//         }
//         cout<<endl;
//     }

// }

// ------->  OPTIMAL APPROACH  <-------

void rotate(vector<vector<int>>& mat){
    if(mat.empty()){
        return;
    }
    int r = mat.size();
    for(int i = 0 ; i< r ; i++){
        for(int j = 0 ; j <r ; j++){
            if(i<j){
                swap(mat[i][j] , mat[j][i]);
            }
            
        }
    }
    for(int i = 0 ; i < r ; i++){
        reverse(mat[i].begin() , mat[i].end());
    }
}

int main(){
    vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0 ; i< 3 ; i++){
        for(int j = 0 ; j< 3 ;j++){
            cout<<m[i][j]<<"    ";
        }
        cout<<endl;
    }
    cout<<endl;
    rotate(m);
    for(int i = 0 ; i< 3 ; i++){
        for(int j = 0 ; j< 3 ;j++){
            cout<<m[i][j]<<"    ";
        }
        cout<<endl;
    }

}
