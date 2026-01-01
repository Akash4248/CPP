#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    float marks[3];

}
st[60];
int main(){
    int i,n,rollno;
    float sum=0,avg;
    printf("enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the name of %d student\n",i+1);
        scanf("%s",st[i].name);
        printf("enter the roll no of %d student\n",i+1);
        scanf("%d",&st[i].roll);
        printf("enter the marks of %d student\n",i+1);
        scanf("%f%f%f",&st[i].marks[0],&st[i].marks[1],&st[i].marks[2]);
        
    }
}