#include<stdio.h>
int fun(int n){
    if(n<0){
printf("not valid!!!!!!!!!!");
    }
    if(n==1 )
    return 1;
    return n*fun(n-1); 
}
int  main(){
    int x;
    printf("Enter a number:");
    scanf("%d",x);
    int f=fun(x);
    printf("%d",f);
    return 0;
}