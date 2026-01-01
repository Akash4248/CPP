#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    
    {
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>b && a<c)
    printf("%d",a);
    if(b>c && b<a)
    printf("%d",b);
    if(c>a && c<b)
    printf("%d",c);
    
    }

    return 0;
}