#include<stdio.h>
void main(){
    //find the sum of the series:
    //1-2+3-4+5-6+7............. upto n
    int n,i=1,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n>0)
    {
       if (i%2==0)
        sum=sum-i;
       else
       sum=sum+i;
       n--;
       i++;
    }
    printf("sum of series is :%d",sum);
    
}
/*
using formula
if(n%2==0)
sum=-n/2;
else
sum=-n/2+n;
printf("%d",sum);


*/