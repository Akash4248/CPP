#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s, md;
    getline(cin, s);

    stack<int> st;
    int n = 0;
    for (char c : s)
    {
        if (c == ' ')
        {
            if (!md.empty())
               { st.push(stoi(md));
               md.clear();
               }

            continue;
        }

        if (isdigit(c))
        {
            md += c;
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            switch (c)
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(b - a);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(b / a);
            default:
                break;
            }
        }
    }
    cout << st.top();

    return 0;
}