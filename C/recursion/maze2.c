#include<stdio.h>

int maze2(int n,int m){
    int downways=0;
    int rightways=0;
    if(n==1 && m==1)    return 1;
    if(n==1) //can not go down 
    rightways+=maze2(n,m-1);
    if(m==1) //can not go right
    downways+=maze2(n-1,m);
    if(n>1 && m>1){
        rightways+=maze2(n,m-1);
        downways+=maze2(n-1,m);
    }
    int totalway =downways +rightways;
    return totalway;
}
int main(){
    int m,n;
    printf("Enter the no of rows of maze:");
    scanf("%d",&n);
    printf("Enter the no of columns of maze:");
    scanf("%d",&m);
    
    printf("%d",maze2(n,m));
    return 0;
}