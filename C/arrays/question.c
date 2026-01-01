#include<stdio.h>
int main(){
    int a[50];
    
    for(int i=0;i<=5;i++)
    {   printf("Enter the marks of %d student:",i+1);
        scanf("%d",&a[i]);
    }
 for(int i=0;i<=5;i++)
    {if(a[i]<35)
        printf("%d student\n",i+1);
    }

    return 0;
}