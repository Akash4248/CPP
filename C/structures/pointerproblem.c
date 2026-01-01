#include<stdio.h>
typedef int* ptr;
int main(){
    int x=3,y=4;
    ptr a=&x, b = &y;
    
    printf("%p\n%p",a,b);

    return 0;
}