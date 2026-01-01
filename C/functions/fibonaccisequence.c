#include<stdio.h>
void fib(int n)
{
    int sum=1;
    int a=1,b=1;
    for(int i=1;i<=n;i++)
    {

        
        printf("%d ",sum);
        sum=a+b;
        a=b;
        b=sum;
 
    }
    return ; 
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fib(n);
    return 0;
}