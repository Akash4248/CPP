#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"enter the N value:";
    cin>>n;
    int a[n];
    cout<<"Enter the values to array:";
    for( i=0;i<n;i++)
    cin>>a[i];
    int count=0;
    int j=0,temp[n];
    for(int i=0;i<n;i++){
        if(a[i]==0){
      continue;
        }
        else{
            temp[j++]=a[i];
            count++;
        }
    }
    for(i=count;i<n;i++)
    {
        temp[i]=0;
    }
    for(i=0;i<n;i++)
    cout<<temp[i]<<"\t";
    


}
// can  be solved using two pointer concept 
// use i, j as two pointer pointing two adjecent elements j<i;
// initially j=-1 loop through the array and find the index of first occurence of zero store it into j;
// then again loop through array and set i=j+1  swap the adject elements until the end of the is_array
//  void move(int a[],int n){
//     int j=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==0)
//         {
//             j=i;
//             break;
//         }
//     }
//     if(j==-1) return ; //no zeros
//     for(int i=j+1;i<n;i++){
//         a[j]=a[i];
//         j++;
//     }
//  }