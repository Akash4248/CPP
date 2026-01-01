// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
void insert( int array[],int postion,int element,int len){
    
    
    for(int i=postion;i<len;i++)
        {
            array[postion+1]=array[postion];
    array[postion]=element;
            
        }
          for(int i=0;i<len;i++)
            cout<<array[i];
        return;
}
int main() {
    int t,c=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a[100],b[100];
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                insert(a,i,b[i],n);
                c++;            
                
            }
            sort(a,a+n);
          
            
        }
        cout<<endl<<c<<endl;
        
        
    }

    return 0;
}