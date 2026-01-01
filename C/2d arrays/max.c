#include<stdio.h>
#include<limits.h>
int maximum(int r,int c,int a[r][c]){
    int max=INT_MIN;
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        if(a[i][j]>max)
        max=a[i][j];
       
    }
    
    return max;
        
}
int minimum(int r,int c,int a[r][c]){
    int min=INT_MAX;
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        if(a[i][j]<min)
        min=a[i][j];
    }
    
    return min;
        
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
   int min=minimum(r,c,a);
   printf("maximum number is  : %d\nminimum number is : %d ",max,min);
    return 0;
}