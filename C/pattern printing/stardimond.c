#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int k=n;//          THIS CODE WORKS FOR ODD AND EVEN NUMBERS
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
    {
        printf(" ");

    }
    for(int j=1;j<=i;j++)
    {
        printf("*");

    }
    for(int j=1;j<=i-1;j++)
    {
        printf("*");

    }
       printf("\n");
    }

//
  for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=i-1;j++)
    {
        printf(" ");

    }
    for(int j=1;j<=k-i;j++)
    {
        printf("*");

    }
    for(int j=1;j<=k-i+1;j++)
    {
        printf("*");

    }
       printf("\n");
    }

}