#include<stdio.h>
int main(){
    struct student  //user defined datatype
    {
       int rollno;      //these are attributes
       char name[34];
       float marks;
    };
    struct student a;
    a.rollno=34;
    a.marks=45; //dot opertor is used for intilization and accessing the variables in the structure
 
    printf("Enter the name:");
    scanf("%s",a.name);

    
    printf("%d\n",a.rollno);
    printf("%f\n",a.marks);
    printf("%s\n",a.name);
    return 0;
}