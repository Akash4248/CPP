#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c,disc,root,root1,root2;
    printf("Enter the coefficients of equation:");
    scanf("%f",&a,&b,&c);
    if(a==0&&b==0){
        printf("not possible");
        exit(0);
    }
    else if (a==0&&b!=0)
    {
        root=-b/a;
        printf("linear roots are:",root);
    }
    else
    
    





    return 0;
}