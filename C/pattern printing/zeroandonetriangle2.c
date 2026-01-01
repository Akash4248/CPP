#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
     int sum=1,a;
    for(int i= 1;i<=n;i++)
    {
        if(i%2==0)  a=0; 
        else a=1;     
        for (int j=1;j<=i;j++)
        {  
            if(i%2==0)
            printf("%d ",a);
            else
            printf("%d ",a);
            if(a==0)    a=1;
            else    a=0;
        }
        printf("\n");
    }
}/*
ANOTHER METHOD
for (int i=1;i<n;i++)
{
    for(int j=1;j<n;j++)
    {
        if((i+j)%2==0)
        printf("1 ");
        else printf("0 ");
    }
    printf("\n");
}
*/