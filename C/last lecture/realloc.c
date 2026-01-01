#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p=(int *) malloc(10*sizeof(int));
   
   printf("%p\n",p);
   p=realloc(p,30000*4);
   printf("%p",p);
   free(p);
}