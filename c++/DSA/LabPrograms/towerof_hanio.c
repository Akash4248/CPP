#include<stdio.h>
void tower(int n, char s,char d,char t)
{
    if(n>0){
        tower(n-1,s,t,d);
        printf("%d disk is moved from %c to %c\n",n,s,d);
        tower(n-1,t,d,s);
    }
}
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    tower(n,'S','D','T');
}