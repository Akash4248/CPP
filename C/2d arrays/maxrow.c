#include<stdio.h>
#include<limits.h>
int maximum(int r,int c,int a[r][c]){
    int rowsum1=0,rowsum2=0;
    int row=0;
    for(int i=0;i<r-1;i++){
    for(int j=0;j<c;j++){
        rowsum1+=a[i][j];
        rowsum2+=a[i+1][j];
    }
    if(rowsum1>rowsum2)
    row=i;
    else
    row=i+1;
    }
       
    
    
    return row;
        
}

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
           scanf("%d",&a[i][j]);
    }    
   int max=maximum(r,c,a);
   //int min=minimum(r,c,a);
   printf("The row having maximum sum is  : %d ",max+1);
    return 0;
}