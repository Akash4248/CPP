#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // cout << "*";
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }




       

        cout << endl;
    } 
    for(int i=0;i<n;i++)
   { 
    // cout<<" ";
    for (int j = 0; j <=i; j++)
        {
            cout << " ";
        }
       
        for (int j = n-1; j > i; j--)
        {
            cout << "*";
        }
         for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        // cout << " ";
       
        cout << endl;
        
        }
}