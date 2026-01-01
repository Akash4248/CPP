#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double avg=0;
    double  total;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {   
        avg+=a[i]/2.0;
        
    }
    total=(avg*2.0)/n;
    cout<<setprecision(15);
    cout<<total<<endl;
    return 0;
}