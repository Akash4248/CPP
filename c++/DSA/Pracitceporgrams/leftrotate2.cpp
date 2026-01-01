#include<iostream>
using namespace std;
void leftrotate(int arr[],int d,int n){
    int a[d];
    // int n=sizeof(arr)/a[0];
   for(int i=0;i<d;i++)
   { 
    a[i]=arr[i];
    arr[i]=arr[i+1];
    }
    for(int i=d-1;i<n;i++){
        arr[i]=a[i-d];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}
int main(){
    int n;
    cout<<"enter the N value:";
    cin>>n;
    int a[n];
    cout<<"Enter the values to array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the value of D:";
    int d;
    cin>>d;
    leftrotate(a,d,n);


}