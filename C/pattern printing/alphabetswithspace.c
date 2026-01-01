#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        
        
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        int k=65;
        for(int j=1;j<=i;j++)
        {
            printf("%c ",k);
            k++;
        }
        int a=65+i -1;
        for(int j=1;j<=i-1;j++)
        {   --a;
            printf("%c ",a);
          
            
        }
        printf("\n");
    }
}