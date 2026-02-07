#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    int c = a%b;
    if(c==0) return b;
    return gcd(b,c);
}

int gcdOfOddEvenSums(int n) {
     int odd = 1;
    int even = 2;
    int sEven = 2 ;
    int sOdd = 1;
    while(n>1){
        even += 2;
        sEven += even;
        odd += 2;
        sOdd += odd;
        n--;
    }
    return gcd(sEven ,sOdd);
}


int main(){
    cout<<gcdOfOddEvenSums(5);
    
}