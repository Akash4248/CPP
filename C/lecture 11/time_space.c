#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n],sum=0;
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++)
   { scanf("%d",&a[i]);
    sum+=a[i];
   }
    printf("%d",abs((n*(n+1)/2)-sum));

}