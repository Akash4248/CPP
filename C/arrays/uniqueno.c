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
    

    
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i+1;j<n;j++){
        if(a[i]==a[j]) 
            s=1;
        }
        if(s==0) {
            printf("unique element is :%d\n",a[i]);
            // break;
            }
    }
    
    return 0;

}   