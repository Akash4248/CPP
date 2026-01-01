#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of elments:";
    cin>>n;
    int a[n];
    cout<<"Enter the Array Elements:Range(1-10)";
    int i=0;
    while(i<n){
        cin>>a[i];
        i++;
    }
    // Pre Calculation 

    int b[11]={1};
    for(i=0;i<n;i++)
    {
    b[a[i]]+=1;
    }
    cout<<"Ocurence of each element:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" is occured "<<b[i]<<" times."<<endl;

    }


}