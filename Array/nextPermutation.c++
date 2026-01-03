#include <bits/stdc++.h>
using namespace std;

void next(vector<int>& v)
{
    int pivot = -1;
    int n = v.size();
    for (int i = n-1 ; i > 0; i--)
    {
        if (v[i] > v[i - 1])
        {
            pivot = i - 1;
            break;
        }
    }
    if (pivot == -1 )
    {
        reverse(v.begin() , v.end());
        return;
    }
    int large = pivot + 1;
        for (int i = pivot + 2; i < n; i++)
        {
            if (v[large] > v[i])
            {
                large = i;
            }
        }

        swap(v[large], v[pivot]);
        reverse(v.begin()+pivot+1, v.end());
        return;
}

int main()
{
    vector<int> v = {1, 2, 3,4,5,6};
    next(v);
    for(int x : v){
        cout<<x<<"  ";
    }
}