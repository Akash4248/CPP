#include<stdio.h>
void main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int a=65;
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");

        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%c ",a);
            a++;

        }
        printf("\n");
    }
}
