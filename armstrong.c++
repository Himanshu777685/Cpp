#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"elements:"<<endl;
    for(int i =0 ; i<n ;i++){
        cin>>arr[i];
    }

    map<int ,int>mpp;

    for(int x:arr){
        mpp[x]++;
    }

    for(auto i : mpp){
        cout<<i.first<< "->" <<i.second<<endl;
    }

    // int q;
    // cout<<"enter number of queries: ";
    // cin>>q;
    // while(q--){
    //     int num;
    //     cout<<"enter number to find frequency: ";
    //     cin>>num;
    //     cout<<mpp[num]<<endl;
    // }
}
