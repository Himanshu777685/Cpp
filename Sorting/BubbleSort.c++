#include <bits/stdc++.h>
using namespace std;

void BuubleSort(int arr[] , int n){

    for(int i = n-1 ; i>=1 ;i--){
        for(int j = 0 ; j < i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[10] = {4,5,6,2,7,1,8,7,2,9};
    BuubleSort(arr , 10);
    for(int i = 0 ; i<10 ;i++){
        cout<<arr[i]<<"     ";
    }
}