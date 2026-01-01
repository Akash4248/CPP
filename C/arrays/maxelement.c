#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int t,max=a[0];
    for(int j=0;j<n;j++){
       if(max<a[j])  
        max=a[j];
    }
   
    printf("maximum number is :%d",max);

    return 0;
}  