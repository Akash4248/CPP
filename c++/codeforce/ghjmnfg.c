#include<stdio.h>
 struct employee{
    char *name;
    int age;
    int salary;
};
int main()
{
    printf("%d",sizeof(struct employee));

}