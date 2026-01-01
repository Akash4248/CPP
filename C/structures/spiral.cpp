#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows:";
    cin>>m;
    int n;
    cout<<"enter no of columns:";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         cin>>a[i][j];
        }
    }
    int minr=0,minc=0,maxr=m-1,maxc=n-1;
    while(minr<=maxr&&minc<=maxc){
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
            
        }  minr++;
           if(minr>maxr||minc>maxc) break;
                for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxr]<<" ";

        } maxc--;
                   if(minr>maxr||minc>maxc) break;
                for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<" ";
            
        } maxr--;
                   if(minr>maxr||minc>maxc) break;
                for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";

        }  minc++;
                   if(minr>maxr||minc>maxc) break;
        
    }
    return 0;
}