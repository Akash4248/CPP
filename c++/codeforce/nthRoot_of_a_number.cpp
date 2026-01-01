#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code here
    int n, m;
    cin >> n >> m;
    int low = 1, high = m, set = 0, ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        ans = pow(mid, n);
        if (ans == m)
        {
            set = 1;
            break;
        }
        else if (ans < m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (set)
        cout << ans << endl;
    else
        cout << 0;

    return 0;
}