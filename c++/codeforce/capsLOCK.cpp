#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> s;
    int k;
    if (isupper(s[0]))
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (isupper(s[i]))
                n=1;
            else
            {
               n=0;
                break;
            }
        }
    }
    else if (islower(s[0]))
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (isupper(s[i]))
                n=2;
            else{
                n=0;
                break;
            }

        }
    }
    
    else
    {
       n=0;
    }
   
    if (n == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }

        cout << s << endl;
    }
    else if (n == 2)
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }
}