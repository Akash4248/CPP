#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    int count=0;
    for(int i=0;i<=n-1;i++){
        b[i]=a[n-i-1];
       if(a[i]==b[i])  count++;
       else {
        printf("not");
        break;
       }
        
    }
    if(count==n)
    printf("\nIT is a palindrome!");
    

    return 0;

}