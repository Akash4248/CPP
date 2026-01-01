#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;//            THIS CODE WORKS FOR ODD NUMBERS ONLY
    int ml=n/2 +1;
    for(int i=1;i<=n;i++)
    {
        
        
        for(int j=1;j<=nsp;j++)//for spaces
        {
            printf(" ");
        }
        
        
        for(int j=1;j<=nst;j++)//for stars
        {   
            printf("*");
          
            
        }
        if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }

        printf("\n");
    }
}