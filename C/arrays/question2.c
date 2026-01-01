#include<stdio.h>
int main(){
    int a[10],n,x;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int oddsum=0;
    int evensum=0;

    for(int i=0;i<n;i++){
        if(i%2==0)  evensum+=a[i];
        else    oddsum+=a[i];
    }
   printf("Diffrence between the sum of elements at even indices and to the sum of elements at odd indices is:%d",evensum-oddsum);

    return 0;
}