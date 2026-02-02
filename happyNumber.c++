#include <bits/stdc++.h>
using namespace std;

bool happy(int n)
{
    unordered_set<int> repeat;

    while(n != 1 && !repeat.count(n)){
        repeat.insert(n);
        int sum = 0;
        while(n>0){
             int digit = n%10;
             sum += digit*digit;
             n /= 10;
        }
        n = sum;
    }
    if(n==1){
        return true;
    }else{
        return false;
    }
}

int main()
{
    cout << happy(19);
}
