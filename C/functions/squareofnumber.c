#include<stdio.h>
int fun(int j){
return j*j;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("square of %d is %d",n,fun(n));
    return 0;
}