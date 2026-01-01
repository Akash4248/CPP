#include<stdio.h>
void greet(){

    printf("Good Morning\n");
    printf("How are you?\n");
    return;
}
int main(){

for(int i=1;i<=30;i++)
{
greet();
greet();
greet();  
}
    return 0;
} 