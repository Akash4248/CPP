#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
     int sum=1;
    for(int i= 1;i<=n;i++)
    {
      int  a=1;
      int b=0;
        for (int j=1;j<=i;j++)
        {  
            if(i%2==0)
            printf("%d ",b);
            else
            printf("%d ",a);
            if(j%2==0)
            {a=a+b;
            b=a-b;
            a=a-b;
            }
            else
            {
                b=a+b;
                a=b-a;
                b=b-a;
            }
            
        }
        printf("\n");
    }
}