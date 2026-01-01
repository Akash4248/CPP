#include<stdio.h> 
int factorial(int c)
{
    int fact=1;
    for(int i=1;i<=c;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=1;
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    int r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++ )
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            int icj=combination(i,j);
            printf("%d",icj);
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}