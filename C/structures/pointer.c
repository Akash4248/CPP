 #include<stdio.h>
#include<string.h>

  
int main(){
 typedef struct person
 {
    int age;
    float wt;
 }ptr;
 ptr p1;
 ptr *x=&p1;
 (*x).age=9897;
 (*x).wt=8.89;
 x->age=99;
 printf("%d \n",p1.age);
  return 0; 
    
}