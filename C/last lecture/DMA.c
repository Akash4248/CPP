#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p=(int *) malloc(10*sizeof(int));
   
    for(int i=0;i<4;i++)
    scanf("%d",&(*p)+i);
    for(int i=0;i<4;i++)
    printf("%d\n",*p+i);
    free(p);
}