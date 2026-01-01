#include<stdio.h>
int min(int a,int b){
    if(a>b) return b;
    else return a;
}
int gcd(int a,int b){
    int hcf=1;
     for(int i=min(a,b);i<=1;i++)
     {
        if(a%i==0 && b%i==0)
        hcf=i;
        break;
     }
     return hcf;
}


int main(){
    int a;
    printf("Ente a number:");
    scanf("%d",&a);
    int b;
    printf("Enter another number:");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("highest common factor of %d and %d is :%d",a,b,hcf);

    return 0;

}