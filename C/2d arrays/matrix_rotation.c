#include<stdio.h>
int main(){
    int n;
    //for nxn matrix 
    printf("Enter the number of rows of first matrix:");
    scanf("%d",&n);
    //rotate the matrix by 90 degree
    /*step1: find transpose of given matrix
    step2: reverse each row  */
    int a[n][n];
    
    printf("Enter the elements of matrix A:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
            int temp;
    printf("\n\n");
    //for transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++){
        
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
            
        }
    }
    //print transposed matrix
      printf("\n\nTRANSPOSE OF MATRIX  IS :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
        
        }
        printf("\n");
    }
    //for reverse each row
    for(int i=0;i<n;i++)
    {
        int j=0;
        int k=n-1;
        while (j<k)
        {
            /* swap the numbers*/
            temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            j++;
            k--;
        }
        
    }
     printf("\n\nROTATED  MATRIX IS :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}