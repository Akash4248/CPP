#include<stdio.h>

int main(){
    
int n;
printf("enter the number of rows:");
scanf("%d",&n);

for (int i=1;i<=n;i++){
    char ch='A';
    if(i%2==0)
{
    for (int j=1;j<=i;j++)
{
printf("%c ",ch);
ch=ch+1;
}
}
else
{
     for (int j=1;j<=i;j++)
{
printf("%d ",j);
ch=ch+1;
}
}
printf("\n");


}
   
   
   return 0;
}