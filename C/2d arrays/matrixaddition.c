#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],i,j,k,n,m,x,y;
    printf("Enter the number of rows and colmns of matrix A:\n");
    scanf("%d%d",&n,&m);
    printf("Enter the number of rows and columns of matrix B:\n ");
    scanf("%d%d",&x,&y);
    while(n!=x && m!=y){
        printf("Error number of rows  and colmns of first matrix is not equal to  rows and colmns of second matrix! \n ");
        printf("Enter the number of rows and colmns of matrix A:\n");
        scanf("%d%d",&n,&m);
        printf("Enter the number of rows and columns of matrix B:\n ");
        scanf("%d%d",&x,&y);
    }
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("Enter the element a%d%d ",i+1,j+1);
        scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the elements of matrix B:\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
        printf("Enter the element b%d%d ",i+1,j+1);
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            c[i][j]=0;
        
    for(i=0;i<n;++i)
        for(j=0;j<y;j++)
            c[i][j]+=a[i][j]+b[i][j];
     
    printf("Sorted array is :\n");
    for(i=0;i<n;i++)
        for(j=0;j<y;j++)
        {
            printf("%d    ",c[i][j]);
            if(y-1==j)
                printf("\n\n");
        }
    
    return 0;
}