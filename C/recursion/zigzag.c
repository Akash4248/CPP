#include<stdio.h>

void pip(int n){
if(n==0) return;
printf("%d",n);
pip(n-1);
printf("%d",n);
pip(n-1);
printf("%d",n);
    
}
int main(){
    int n;
    printf("Enter the no of rows of maze:");
    scanf("%d",&n);
    pip(n);
    return 0;
}   