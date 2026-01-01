#include<stdio.h>
#include<limits.h>
int maximum(int r,int c,int a[r][c]){
    int one=0,zero=0;
    int row=0;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       if(a[i][j]=='1')
       one++;
       else
       zero++;
    }
    if(one>zero)
    row=i;
 
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