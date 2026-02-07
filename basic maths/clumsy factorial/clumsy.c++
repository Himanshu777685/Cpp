#include<bits/stdc++.h>
using namespace std;

int clumsy(int n ){
    
    int ans = 0;
    int prev = n;   
    int op = 0;     
    n--;

    while (n > 0) {
        if (op % 4 == 0) {          
            prev = prev * n;
        }
        else if (op % 4 == 1) {     
            prev = prev / n;
        }
        else if (op % 4 == 2) {     
            ans += prev;
            prev = n;
        }
        else {                      
            ans += prev;
            prev = -n;
        }
        op++;
        n--;
    }

    return ans + prev;
}

int main(){
    cout<<clumsy(10);
}