#include<stdio.h>
int stair(int n){
    if (n<=2) 
    return n;
    return (n-1)+stair(n-2);
    }
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}