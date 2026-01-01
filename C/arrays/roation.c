#include<stdio.h>
void reverse(int a[],int n,int m){
    for(int i=n,j=m;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter a number:");
    scanf("%d",&k);
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    
    for(int j=0;j<n;j++){
     printf("%d ",a[j]);
    }
    return 0;
}