#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number:");
    scanf("%d",&n); 
    for(int i=2;i<=n-1;i++)
    { if (n%i==0) 
            {
               c++;
              break;
            }
    }     
     if (c==0)
    {
        printf(" is a prime no:");
    }else printf("composite no");
   
    
    return 0;

}