#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    int maxi = INT_MIN;
    int rem = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            rem = b[i];
        else
        {
            rem = rem - a[i];
            rem += b[i];
        }
        maxi = max(rem, maxi);
        // cout<<maxi<<endl;
    }
    cout<<maxi<<endl;
}