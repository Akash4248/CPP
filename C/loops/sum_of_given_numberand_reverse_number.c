#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int rev=0;
    int i=n;
    while (n!=0)
    { 
    rev=(n%10)+rev*10;
    
    n=n/10;
      
    }
    printf("Reverse Number is:%d\n",rev);
    while (rev>0)
    {   
       sum=(sum*10)+((i%10)+(rev%10));
       i=i/10;
       rev=rev/10;
    }
    
    
    printf("sum of digits is:%d",sum);
}