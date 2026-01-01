#include<stdio.h>
int main(){
    int r1,c1;
    
    printf("Enter the number of rows of first matrix:");
    scanf("%d",&r1);
    printf("Enter the number of colmns of first matrix:");
    scanf("%d",&c1);
    int a[r1][c1];
    
    printf("Enter the elements of matrix A:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
    
            //code for addition of matrix 
    
    int c[c1][r1];
    printf("\n\n");
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r1;j++){
        printf("%d ",a[j][i]);
        c[i][j]=a[j][i];
        }
        printf("\n");
    }
     printf("\n\n");
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r1;j++){
        printf("%d ",c[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}