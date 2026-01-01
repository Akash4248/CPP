#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);

    while (n!=0)
    { if((n%10)%2==0)//== for even number and != for odd number
        sum+=(n%10);
       n=n/10;
      
    }
    printf("sum of digits is:%d",sum);
}