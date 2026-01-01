#include<stdio.h>
int main(){
    int a[50];
    printf("Enter the elements:");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
 for(int i=5;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}