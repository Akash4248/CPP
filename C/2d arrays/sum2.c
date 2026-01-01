#include<stdio.h>
int sum(int r,int c,int a[r][c],int l1,int l2,int r1,int r2){
    int s=0;
    for(int i=l1;i<l2;i++)
    for(int j=r1;j<r2;j++)
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
    printf("Enter the elements of array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
           scanf("%d",&a[i][j]);
    }    

    int l1,r1,l2,r2; 
    read:
    printf("Enter the range (l1,r1) to (l2,r2):");
    scanf("%d%d%d%d",l1,r1,l2,r2);
    printf("wrfdg");
    while(l1>r || l2>r || r1>c || r2>c)
    {
        printf("ERROR!!!!!\nEnter the cooridinates again!\n");
        goto read;
    }
    int s=sum(r,c,a,l1-1,l2-1,r1-1,r2-1);

   printf("sum of all number is : %d ",s);
    return 0;
}