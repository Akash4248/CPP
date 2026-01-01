#include<stdio.h>
// void fun(int n,int i){
   
//     if(n==0) return;
//     printf("%d\n",i);
//     i++;
//     fun(n-1,i);

// }
void fun(int n,int i){
   
    if(i>n) return;
    printf("%d\n",i);
    
    fun(n,i+1);

}



int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
     int  i=1;
    fun(n,i);
    return 0;
}