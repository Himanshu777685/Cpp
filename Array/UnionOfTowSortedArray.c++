#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans;
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
        else
        {
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n)
    {
        if (ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        if (ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 4, 6, 8, 9, 10};
    vector<int> arr2 = {10, 23, 43, 47, 65};

    vector<int> arr3 = unionArray(arr1, arr2);

    for(int X:arr3){
        cout<<X<<"  ";
    }
}
