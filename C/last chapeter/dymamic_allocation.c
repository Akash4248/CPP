#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    ptr=(int * )malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated");
        exit(0); 
   }
   else{
    printf("Memory allocated successfully!\n");
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    ptr[i]=i+1;
    printf("Entered elements are:\n");
    for(i=0;i<n;i++)
    printf("%d ",ptr[i]);
   }
   free(ptr);
   return 0;
}