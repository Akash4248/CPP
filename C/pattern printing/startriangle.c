#include<stdio.h>

int main(){
    
int n;
printf("enter the number of rows:");
scanf("%d",&n);
int k=n;
for (int i=1;i<=n;i++){
for (int j=1;j<=k;j++)
printf("* ");
printf("\n");
k--;

}
   return 0;
}
/* another method
derive a formula 
* * * * i=1,j=4 and i+j=5 ->n+1 so j=5-i+1 in general: j=n-i+1
* * * i=2,j=3 and i+j=5
* * i=3,j=2 and i+j=5
* i=4,j=1 and i+j=5
for (int i=0;i<=n;i++)
{for(int j=0;j<n+1-i;j++)
printf("* ");
printf("\n");

}
*/