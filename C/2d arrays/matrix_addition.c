#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    
    printf("Enter the number of rows of first matrix:");
    scanf("%d",&r1);
    printf("Enter the number of colmns of first matrix:");
    scanf("%d",&c1);
   
 
    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c1];
    printf("Enter the elements of matrix A:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            {
                printf("Enter the element of a%d%d: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
    printf("Enter the elements of matrix B:\n");
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            {
                printf("Enter the element of b%d%d: ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
    // for(int i=0;i<r1;i++) //initilizing all values of 3rd matrix to 0
    //     for(int j=0;j<c1;j++)
    //         c[i][j]=0;
            //code for addition of matrix 
    for(int i=0;i<r1;i++)
    for(int j=0;j<c1;j++)
        c[i][j]=a[i][j]+b[i][j];
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}