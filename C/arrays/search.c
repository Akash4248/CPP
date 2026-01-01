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
    int s;
    printf("Enter the search element:");
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(a[i]==s) {
            printf("YES!");
            s=0;
            break;
        }
    }
    if(s!=0) printf("NO");
    return 0;
}  