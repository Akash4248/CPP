#include<stdio.h>
#include<string.h>
int main(){
  typedef struct player{
    char name[50];
    int age;
    int testmatch;
    float avg;
    
  }player;
    player a[3];
    int n;
   //
    for(int i=0;i<3;i++){
    printf("Enter the name of player:");
    scanf("%s",a[i].name);
    printf("Enter the age of the player:");
    scanf("%d",&a[i].age);
    printf("Enter the number of test matches played:");
    scanf("%d",&a[i].testmatch);
    printf("Enter the averge runs in each match:");
    scanf("%f",&a[i].avg);
    }
    printf("\n\n");
    for(int i=0;i<3;i++){
    
    printf("Name : %s\n",a[i].name);
    
    printf("Age : %d\n",a[i].age);
   
    printf("number of testmatch : %d\n",a[i].testmatch);
   
    
    printf("Average runs : %f ",a[i].avg);
    printf("\n\n");
    
    }





    return 0;
}