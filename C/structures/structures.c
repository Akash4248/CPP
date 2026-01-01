#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
    float marks[3];
};
 struct student s[10];
void read(struct student s[],int n){
    for(int i=0;i<n;i++){
        printf("Enter the rollnumber of %d student: ",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter the name of student: ");
        scanf("%s",s[i].name);
        printf("Enter the marks of 3 subjects in one line: ");
        scanf("%f%f%f",&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);
    }
}

void print(struct student s[], int n){
    printf("Enter the roll number of student:");
    int roll;
    scanf("%d",&roll);
    for(int i=0;i<n;i++)
    {
        if(s[i].rollno==roll){
            printf("Name of the student is: %s",s[i].name);
            printf("Marks of the 3 subjects are;\n%f\n%f\n%f",s[i].marks[0],s[i].marks[1],s[i].marks[2]);
        }
    }
}
int main(){
    int n;
    printf("Enter the number of students:");
   scanf("%d",&n);
    read(s,n);
    print(s,n);
    
}