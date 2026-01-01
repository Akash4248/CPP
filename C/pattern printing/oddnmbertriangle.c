#include<stdio.h>

int main(){
    
int n;
printf("enter the number of rows:");
scanf("%d",&n);

for (int i=1;i<=n;i++){
    int k=1;
for (int j=1;j<=i;j++){
printf("%d ",k);
    k+=2;
    }
printf("\n");


}
   return 0;
}