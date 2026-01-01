#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int t,max=INT_MIN,smax=INT_MIN;
    for(int j=0;j<n;j++){
       
       if(max<a[j])  
       {
         smax=max;
         max=a[j];
       }else if(smax<a[j])
       smax=a[j];
    }
   
    printf("maximum number is :%d",max);
    printf("\nSecond maximum number is :%d",smax);
    return 0;
}  