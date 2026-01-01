#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements of first set:");
    scanf("%d",&n);
    int    a[n];
    printf("Enter the elements of the first set:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m;
    printf("Enter the no of elements of second set:");
    scanf("%d",&m);
    int b[m];
    printf("Enter the elements of the set 2:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    int c[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(a[i]==b[j])
        ;
        else
        {
            
            c[i]=a[i];
        }
       
    }
    for(int i=0;i<n;i++)
    printf("%d",c[i]);
    return 0;

}