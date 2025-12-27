#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> arr){
    int n = arr.size();
    int profit = 0;
    int bestBuy = arr[0];
    for(int i = 0 ; i< n ; i++){
        if(bestBuy < arr[i]){
            profit = max(profit , (arr[i]-bestBuy));
        }
        bestBuy = min(bestBuy ,arr[i]);
    }
    return profit;
}

int main(){
    vector<int> arr = {20,10,40,30,50,60,40,30};
    cout<<maxProfit(arr);
}