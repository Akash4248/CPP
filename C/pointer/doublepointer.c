#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int *x=&n;// here x stores the adress of n
    int* *y=&x;//here y stores the adress of the pointer x
    printf("%p\n",x);//it prints the value of x means adress of n
    printf("%p",y);//it prints the value of y means adress of x
    printf("\n%p",&x);//it prints the adress of x means value of y
    printf("\n%p",&y);//it prints the adress of y
    printf("\n%d\n",**y);//it prints the value
    // of the variable whose adress is stored in the 
    //anothe pointer (another adress)
    printf("%p",**y);//i dont know what it prints!!
    // check it out!!!!!!!
        return 0;

}