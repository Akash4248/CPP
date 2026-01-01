#include<stdio.h>

int  power(int a,int b){
    
    if(b==0) return 1;
    int n=power(a,b/2);
    if (b%2==0)
    return n*n;
    else
    return n*n*a;
}
int main(){
    int a,b;
    printf("Enter a base:");
    scanf("%d",&a);
    printf("Enter a power:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}// alternative method for calulating power of a number.
//(using recursion)