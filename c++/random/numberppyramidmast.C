#include<stdio.h>
int main(){


    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    int a=1;
    for(int i=1;i<=2*n-1;i++)
   {
    printf("%d ",a);
    a++;
   }
   int m=n-1;
      printf("\n");
    for(int i=1;i<=m;i++)
    {    a=1;
        for(int j=1;j<=nst;j++)//stars
        {
            printf("%d ",a);
            a++;

        }
        for(int j=1;j<=nsp;j++)//spaces
        {
            printf("  ");
            a++;

        }
        
        for(int j= 1;j<=nst;j++)//stars
        {
            printf("%d ",a);
            a++;

        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}