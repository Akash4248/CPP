#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    printf("Enter the number of colmns:");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c;j++)
            a[i][j]=10;
    }    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}