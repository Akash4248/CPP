#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float a,b,c,disc,root,root1,root2;
    printf("\n Enter the coefficiant:");
    scanf("%f%f%f",&a,&b,&c);
    
    if(a==0&&c==0){
    printf("roots are not possible!!!");
    exit(0);
    }
    else if(a==0&&b!=0){
        root=-b/a;
        printf("linear roots=%f",root);
    }
    else
    disc=b*b-4*a*c;

    if(disc>0){
    root1=(-b+sqrt(disc))/(2*a);
    root2=(-b-sqrt(disc))/(2*a);
    printf("roots are real and distinct!");
    printf("root are\n%f\n%f",root1,root2);
    }
    else if(disc==0){
    root1=root2=-b/(2*a);
    printf("root are real and equal!");
    printf("roots are\n%f\n%f",root1,root2);
    }
    else{
     root1=-b/(2*a);
     root2=sqrt(abs(disc)/(2*a));
     printf("the roots are imaginary!");
     printf("first root is %f+i%f\n",root1,root2);
     printf("second root is %f-i%f\n",root1,root2);
    }
    return 0;
}