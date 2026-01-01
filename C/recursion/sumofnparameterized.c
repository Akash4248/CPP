#include<stdio.h>
// int  sum(int n){
//     if(n==0) return 0;
    
//     return n+sum(n-1);
// }
void  sum(int n,int s){
    
    if(n==0) {
        printf("%d\n",s);
        return ;
        }
    sum(n-1,s+n);
    
    return ;
}
int main(){
    int n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    sum(n,s);
    // printf("%d",s);
    return 0;
}