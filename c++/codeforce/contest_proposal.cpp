#include<iostream>
#include<algorithm>

using namespace std;
void insert(int a[],int pos,int val,int n){
    int i;
   
    
    for(int i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
       

    }
    a[pos]=val;
 

}

int main(){

    int t,n,c;
    cin>>t;
    for(int test=0;test<t;test++){
    cin>>n;
    int a[n+1],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    c=0;
    for(int i=0;i<n;i++)
    {   
       for(int k=i;k<n;k++) 
        if(a[i]>b[k])
        {
            insert(a,i,b[k],n);
            
            c++;
            break;
        }

        sort(a,a+n);
    }
   
    cout<<c<<endl;
}
    return 0;

}//done