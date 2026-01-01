#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    int low = 0, high = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper((char)s[i]))
            high++;
        else
            low++;
    }
    if (high > low)
    {
        for (char &c : s)
            c = toupper((char)c);
    }
    else
    {
        for (char &c : s)
            c = tolower((char)c);
    }
    cout << s << endl;
}