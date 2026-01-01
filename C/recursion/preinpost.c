#include<stdio.h>

void pip(int n){
if(n==0) return;
printf("PRE%d/n",n);
pip(n-1);
printf("IN%d/n",n);
pip(n-1);
printf("POST%d/n",n);
return;
    
}
int main(){
    int n;
    printf("Enter the no of rows of maze:");
    scanf("%d",&n);
    pip(n);
    return 0;
}