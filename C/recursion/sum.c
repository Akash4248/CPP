#include<stdio.h>
int  sum(int n){
    if(n==0) return 0;
    
    return n+sum(n-1);
}

int main(){
    int n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
    return 0;
}