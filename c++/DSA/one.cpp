#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    
    cout << "Enter the numbe of elements:";
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cursum;
    int j = 0, count = 0;
    if (a[0] % 2 == 0)
        count++;
    int i = 1;
    while (i < n)
    {
        j = i - 1;
        if (a[i] % 2 != 0)
            count++;
        else
        {
            if ((a[i] + a[j]) % 2 != 0)
            {
                count++;
                i++;
            }
            else
                j++;
        }
    }
    cout<<count<<endl;
}
// this is the program to find the number of sub arrays with odd sum