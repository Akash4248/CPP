#include<stdio.h>
#include<limits.h>
int main(){
    int n,t;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int min=0;
    int m=__WINT_MIN__;
    for(int i=0;i<n-1;i++)
    {   min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(a[min]>a[j])
            min=j;
        }
        if(min!=i)
        {
            int t=a[min];
            a[min]=a[i];
            a[i]=t;
        }
    }
    printf("Sorted Array is :\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}