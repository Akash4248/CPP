#include<stdio.h>
#include<stdlib.h>
int main(){
   int x=0;
   int *p=NULL;
   printf("%p",p);
   int * ptr=(int *)calloc(10,4);
   ptr++;
   free(ptr);
}