#include<stdio.h>
int  fun(int n){
    if(n==0)
    return 1;
    printf("good morining:A%d\n",n);
    return fun(n-1);

}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}