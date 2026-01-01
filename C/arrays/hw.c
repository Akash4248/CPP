#include<stdio.h>
int main(){
    int a[10],n,x;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a number:");
    scanf("%d",&x);
    int t=0;
    for(int i=0;i<n;i++){
        if(x<a[i])
        t++;

    }
    printf("No of elements greater than %d is: %d",x,t);

    return 0;
}