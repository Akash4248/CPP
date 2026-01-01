#include<stdio.h>
int main(){
    int r,c;

    printf("Enter the number of rows :");
    scanf("%d",&r);
    printf("Enter the number of colmns:");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements:\n");
    
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
        
    }
    printf("\n\n");
    //wave print 2
    
   for(int i=0;i<c;i++)
   {
    if (i%2==0)
    {
        for(int j=r-1;j>=0;j--)
        printf("%d ",arr[j][i]);
    }
    else
    {
        for(int j=0;j<r;j++)
        printf("%d ",arr[j][i]);
    }
    printf("\n");
    }
   
        

    return 0;

}  