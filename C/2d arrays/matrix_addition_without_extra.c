#include<stdio.h>
void add(int m,int n,int a[m][n],int b[m][n]){
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        a[i][j]=a[i][j]+b[i][j];
    return;
}
int main(){
    int r1,c1;
    read:
    printf("Enter the number of rows of first matrix:");
    scanf("%d",&r1);
    printf("Enter the number of colmns of first matrix:");
    scanf("%d",&c1);
   
   
    int a[r1][c1];
    int b[r1][c1];

    printf("Enter the elements of matrix A:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            {
                printf("Enter the element of a%d%d: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
    printf("Enter the elements of matrix B:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            {
                printf("Enter the element of b%d%d: ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
    
    
    add(r1,c1,a,b);
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}