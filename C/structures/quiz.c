#include<stdio.h>
struct k{
    int p;
    int n;
};
int main(){
    int n;
    n=10;
    struct k pen;
    pen.n=80;
    pen.p=n;
    printf("%d\n",pen.p);
    pen.p=pen.n;
    printf("%d",pen.p);
}