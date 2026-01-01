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
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum+=a[i];
    }
    int sum2=(n*(n-1))/2;
    if(sum2-sum)
    printf("MISSING NUMBER IS:%d",sum2-sum);
    else
    printf("not missing");
    return 0;
}  