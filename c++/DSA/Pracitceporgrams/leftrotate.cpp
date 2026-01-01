#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the N value:";
    cin>>n;
    int a[n];
    cout<<"Enter the values to array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int temp=a[0];
    int i;
    for( i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
    for(i=0;i<n;i++)
    cout<<a[i]<<"\t";


}