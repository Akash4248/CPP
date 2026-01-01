#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    printf("ENter the elements of array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l=0;
    int h=n-1;
    int m=(l+h)/2;
    int s;
    scanf("%d",&s);
    while(l<=h)
    {
        
        if(a[m]==s)
        {
            printf("YES IT IS present at position %d",m+1);
             
            break;
        }
        else if(a[m]>s) 
        h=m-1;
        else 
        l=m+1;

        m=(l+h)/2;

    }
    if(l>h)
    printf("not found");
    return 0;
}