#include<stdio.h>
int main(){


    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    
   for(int i=1;i<=2*n-1;i++)
   {
    for(int j=1;j<=2*n-1;j++)
   {
    int min=0;
    int a=i,b=j;
    if(i>n) a=2*n-i;
    if(j>n) b=2*n-j;
    if(a<b) min=a;
    else min=b;
    int max=n-min+1;
    printf("%d",max);
    
   }

    printf("\n");
   }
 
    return 0;
}