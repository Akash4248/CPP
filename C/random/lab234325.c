#include<stdio.h>
int gcd(int a,int b){
    while(a!=b)
    {
        if(a>b)
        return gcd(a-b,b);
        else
        return gcd(a,b-a);

    }
    return a;
}
int lcm(int a,int b)
{
    static int tm=1;
    if(tm%a==0 && tm%b==0)
    return tm;
    tm++;
    lcm(a,b);
    return tm;
}
int main(){
    int n1,n2,g,l;
    printf("Enter the two numbers:");
    scanf("%d %d",&n1,&n2);
    g=gcd(n1,n2);
    printf("GCD of %d  and %d is %d\n",n1,n2,g);
    if(n1>n2)
    l=lcm(n1,n2);
    else
    l=lcm(n2,n1);
    printf("LCM of %d and %d is %d ",n1,n2,l);
}