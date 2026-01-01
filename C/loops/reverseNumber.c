#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int rev=0;
    while (n!=0)
    { 
    rev=(n%10)+rev*10;
    n=n/10;
      
    }
    printf("Reverse Number is:%d",rev);
}