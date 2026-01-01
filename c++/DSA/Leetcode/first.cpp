#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int count=0,max=INT32_MIN;
   
    for(int i=0;i<n;i++)
    {   
        if(a[i]==1 )
        {count+=1;
            
        }
        else {
            count=0;
        }
        if(count>max)
            max=count;
        cout<<max<<" "<<count<<endl;

    }
    cout<<"number of ones are: "<<max<<endl;
    return 0;
}