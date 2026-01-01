#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int binary(int b,int d,int bt)
{
    int btwt;
    if(b>0)
    {
        btwt=b%10;
        d+=btwt*pow(2,bt);
        bt++;
        b=b/10;
        d=binary(b,d,bt);
    }
    return d;
}
int main(){
    int b,d=0,bit=0;
    printf("Enter the binary number:");
    scanf("%d",&b);
    int a=binary(b,d,bit);
    printf("Decimal of %d is %d",b,a);
}