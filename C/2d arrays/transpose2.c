#include<stdio.h>
int main(){
    int n;
    //for nxn matrix 
    printf("Enter the number of rows of first matrix:");
    scanf("%d",&n);
    
    int a[n][n];
    
    printf("Enter the elements of matrix A:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
            int temp;
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        if(i<j){
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
            }
        }
    }
     printf("\n\nTRANSPOSE ARRAY IS :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}