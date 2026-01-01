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
    int b[n];
    for (int i = n-1,j=0; i >= 0,j<n ; i--,j++)
    {
        b[j]=a[i];
        
    }
    for(int i=0;i<n;i++){
        printf("%d  ",b[i]);

    }
  
    return 0;
}  