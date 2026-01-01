#include<stdio.h>
#include<string.h>
void check(char [],int);
int main(){
    char s[20];
    printf("Enter the string:");
    scanf("%s",s);
    check(s,0);
    return 0;


}
void check(char s[],int i){
    int l=strlen(s)-i-1;
    if(s[i]==s[l])
    {
        if(i+1==l || i==l)
        {
            printf("Given string is a palindrome!");
            return ;
        }
        check(s,i+1);
    }
    else
    printf("It is not palindrome");
}