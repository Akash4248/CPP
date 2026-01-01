#include<stdio.h> 
 #include<math.h> 
 #include<stdlib.h> 
 void main() 
 { 
   float a,b,c,root,disc,root1,root2; 
   printf("Enter the coefficients:"); 
   scanf("%f%f%f",&a,&b,&c); 
   if(a==0 && c==0) 
   { 
   printf ("roots are not possible"); 
   exit(0); 
   } 
   else if(a==0 && b!=0) 
  { 
  root=-c/b; 
     printf("Linear root%f",root); 
  } 
 else 
 { 
 disc=b*b-4*a*c; 
 if(disc>0) 
 { 
 root1=(-b + sqrt(disc)) / (2*a); 
 root2=(-b - sqrt(disc)) / (2*a); 
 printf(" Roots are real & distinct!\n "); 
 printf(" The roots are:\n %f\n%f",root1,root2); 
 } 
 else if(disc==0) 
 { 
 root1=root2= -b / (2*a); 
 printf(" Roots are real & equal! "); 
 printf(" \nThe roots are\n %f\n%f",root1,root2); 
 } 
 else 
 { 
 root1= -b / (2*a); 
 root2= sqrt((disc)) / (2*a); 
 printf(" The roots are imaginary!\n"); 
 printf(" The first root is %f + i%f\n ",root1,root2); 
 printf(" The second root is %f - i%f\n ",root1,root2); 
   } 
  } 
 } 
