#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
     int sum=1;
    for(int i= 1;i<=n;i++)
    {
      
        for (int j=1;j<=n-i;j++)
        {  
           printf("  "); 
        }
        int a='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}