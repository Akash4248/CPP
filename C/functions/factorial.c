#include<stdio.h>

    int factorial(int j){
        int m=1;
        for(int i=1;i<=j;i++)
            m=m*i;
        return m;

    }
    int main(){
        int n;
        printf("Enter a number:");
        scanf("%d",&n);
        int ans=factorial(n);
        printf("%d",ans);
        return 0;
    }
