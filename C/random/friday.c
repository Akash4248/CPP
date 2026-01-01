#include<stdio.h>
int main(){
int arr[4],sum=0 ;

for(int i=0;i<=3;i++){
printf("enter the element no %d=",i+1);
scanf("%d",&arr[i]);
}
for(int i=0;i<=3;i++){
 
sum=sum+arr[i];
}

printf("the sum of the elements is %d",sum);
return 0;
}