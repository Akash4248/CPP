#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));
    
    if(ptr==NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum =sum + *(ptr+i);
    }
    printf("sum=%d",sum);
    free(ptr);
}
// int main(){
    
//      int *ptr,n,sum=0;
//     printf("Enter the number of elements:");
//     scanf("%d",&n);
//     ptr=(int*) calloc(n ,sizeof(int));
    
//     if(ptr==NULL)
//     {
//         printf("Error! memory not allocated.");
//         exit(0);
//     }
//     printf("Enter the elements:");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",ptr+i);
//         sum =sum + *(ptr+i);
//     }
//     printf("sum=%d",sum);
//     free(ptr);
// }