#include<stdio.h>
void  fun(int n){
    if(n==0) return ;
    printf(" Good morning%d\n",n); 
    fun(n-1);
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}