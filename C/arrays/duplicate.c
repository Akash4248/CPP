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
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(a[i]==a[j]){
            printf("YES!");
            s=1;
            break;
            }
        }
        if(s==1)    break;
    }
    if(s==0)    printf("Not have duplicate");
    return 0;
}  