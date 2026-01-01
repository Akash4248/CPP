#include<stdio.h>
int main(){
  int a=0,b=1,sum=0,n;
  printf("Enter a number:");
  scanf("%d",&n);
  for (int  i = 1; i <= n; i++)
  {
  sum=a+b;
  a=b;
  b=sum;
    printf("The %d fibonacci number is:%d\n",i,sum);
  }
  


   return 0;
}