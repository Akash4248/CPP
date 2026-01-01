#include<stdio.h>
void main(){
    int n,m;
    printf("Enter  the number of rows and columns :");
    scanf("%d%d",&n,&m);

    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==m)
            printf("* ");
            else if(i==1)
            printf("* ");
            else if(i==n)
            printf("* ");
           else if(j==1)
            printf("* ");
            else
            printf("  ");
            
        }
        printf("\n");
    }
}