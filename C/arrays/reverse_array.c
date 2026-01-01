#include<stdio.h>
int main(){
int a[10][10],b[10][10],r1,c1,r2,c2,i,j,k,result[10][10];
printf("enter the row and column for first matrix");
scanf("%d %d",&c1,&r1);
printf("enter the row and column for second matrix");
scanf("%d %d",&c2,&r2);
while(c1!=r2){
    printf("error");
}
printf("\n enter the elements of matrix1:\n");
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("enter elements of matrix1 a%d%d:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("enter elements of matrix2 b%d%d:",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
}for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        result[i][j=0];
    }
}

for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
    for(k=0;k<c1;k++){
        result[i][j]+=a[i][k]*b[k][j];
    }
    }
}




}