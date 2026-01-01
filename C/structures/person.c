#include<stdio.h>
#include<string.h>
int main(){

    struct Person
    {
        char name[50];
        /*Elements in the structure are stored in a continus manner 
        it is same as the class*/
        int salary;
        int age;
    }p1,p2;
    strcpy(p1.name,"jeevan");
    strcpy(p2.name,"jeevan2");
    p1.age=30;
    p2.age=33;
    p1.salary=4554654;
    p2.salary=3242322;
    printf("%d\n",p1.age);
    printf("%d\n",p1.name);
    printf("%d\n\n",p1.salary);
    printf("%d\n",p2.age);
    printf("%d\n",p2.name);
    printf("%d\n",p2.salary);
    
    return 0;
}