#include<stdio.h>

int maze(int cr ,int cc,int er,int ec){
    int downways =0;
    int rightways =0;
    if(cc==er &&cc==ec)
        return 1;
    if(cc==ec)
        downways +=maze(cr+1,cc,er,ec);
    if(cr==er)
        rightways +=maze(cr,cc+1,er,ec);
    if(cr<er && cc<ec ){
        downways +=maze(cr+1,cc,er,ec);
        rightways +=maze(cr,cc+1,er,ec);
    }
    int totalway =downways +rightways;
    return totalway;
}
int main(){
    int m,n;
    printf("Enter the no of rows of maze:");
    scanf("%d",&n);
    printf("Enter the no of columns of maze:");
    scanf("%d",&m);
    
    printf("%d",maze(1,1,n,m));
    return 0;
}