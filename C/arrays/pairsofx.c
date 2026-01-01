#include<stdio.h>
int main(){
    int a[10],n,x;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]+a[j]==x && a[i]!=a[j])   {
                printf("(%d,%d) ",a[i],a[j]);
                 count++;
            }
        }
    }
    printf("\ntotal number of pairs is:%d",count);

    return 0;
}