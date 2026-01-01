#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,j;
    cout<<"enter the N value:";
    cin>>n;
    vector<int> a(n);  
      cout<<"Enter the values to  array 1:";
    for( i=0;i<n;i++)
    cin>>a[i];
   cout<<"enter the M value:";
    cin>>m;
   vector<int> b(n);  
      cout<<"Enter the values to  array 2:";
    for( i=0;i<m;i++)
    cin>>b[i];
   vector<int>c;
    i=0,j=0;
    while ((n>0) && (m>0))
    {
        if(a[i]>b[j])
       { c.emplace_back(b[j]);
        j++;
        }
        else if(a[i]<b[j]){
            c.emplace_back(a[i]);
            i++;
        }
        n--;
        m--;
    }
    if(n)
    for(;i<a.size();i++)
    c.emplace_back(a[i]);
    if(m)
    for(;j<b.size();j++)
    c.emplace_back(b[j]);

    for(int i=0;i<c.size();i++)
    cout<<c[i]<<'\t';

   
    


}