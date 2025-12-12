#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[] , int n){
    for(int i = 1 ; i< n ; i++){
        int key = arr[i];
        int j = i-1;

        // shifting---->
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {3,4,5,6,2,8,9,1};
    insertionsort(arr , 8);
    for(int i =0 ; i<8 ;i++){
        cout<<arr[i]<<"     ";
    }
}