#include<stdio.h>
int sum(int r,int c,int a[r][c]){
    int s=0;
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    s+=a[i][j];
    return s;
        
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
   int s= sum(r,c,a);
   printf("sum of all number is : %d ",s);
    return 0;
}