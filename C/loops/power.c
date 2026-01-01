#include<stdio.h>
#include<math.h>
int main(){
 int n,m,power=1;
 printf("Enter base:");
 scanf("%d",&n);
 printf("Enter power:");
 scanf("%d",&m);
 for (int i=1;i<=m;i++)
{
    power=power*n;
}
printf("%d raised to the power %d is :%d",n,m,power);

   return 0;
}
//another method
//  printf("Enter two numbers:");
//  scanf("%d%d",&n,&m);
//  printf(" %d to the power %d is %f",n,m,pow(n,m));