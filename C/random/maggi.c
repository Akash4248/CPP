#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int m=1;
    for(int i=1;i<=10;i++){
        m=n*i;
    printf("%d x %d = %d\n",n,i,m);
    }
    return 0;
}