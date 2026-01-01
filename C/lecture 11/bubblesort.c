#include<stdio.h>
int main(){
    int n,t;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])// > for ascending order
            {

                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted Array is :\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}