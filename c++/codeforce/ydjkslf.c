#include<stdio.h>
 int main(){

int a[5];
char b[8];
   printf("enter the numbers:");
   for(int i=0;i<5;i++)
   {
    scanf("%d",&a[i]);
   printf("%d",a[i]);
   }
   printf("enter characters :");
   for(int j=0;j<8;j++)
   scanf("%c",&b[j]);
   for(int i=0;i<5;i++)
   printf("%d",a[i]);

//    printf("output%d %c",a[i],b[j]);

    return 0;
 }