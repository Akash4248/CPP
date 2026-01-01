#include<stdio.h>
int main(){
    int n,temp,i,j,min;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
          
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        // if(min!=i)
        // {
            
        // }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}