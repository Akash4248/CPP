#include<stdio.h>
int main(){
    int sum=1,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(int j=0;j<n;j++){
        sum*=a[j];
    }
    printf("Product is :%d",sum);

    return 0;
}