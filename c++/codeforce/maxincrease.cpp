#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int i = 0, j = 1, count = 1;
    int maxi = INT_MIN;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1])
        count++;
        else
        count=1;
        maxi=max(maxi,count);
    }
    cout << maxi << endl;
}