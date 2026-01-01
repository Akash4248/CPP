//memory reallocation
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int i,n;
    printf("Enter the number of elments ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int ));

    if(ptr==NULL)
    {
        printf("Memory not allocated!");
        exit(0);
    }
    else{
        printf("Memory allocated successfully\n");
        
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
            printf("%d ",ptr[i]);
        }   
        printf("\n");
        printf("Enterr the new size:");
        scanf("%d",&n);
        ptr=(int *)realloc(ptr,n*sizeof(int));
        printf("Memory successfully re-allocated using realloc\n");

        for(i=0;i<n;i++);
        ptr[i]=i+1;

        printf("Entered elements are:\n");
        for(i=0;i<n;i++)
        printf("%d ",ptr[i]);

    }
    free(ptr);
}