#include<stdio.h>
int check(char* s1,char* s2)
{
    while(*s1==*s2)
    {
        if(*s1=='\0' || *s2=='\0')
        return 0;
        s1++;
        s2++;
    }
    if(*s1=='\0' && *s2=='\0')
    return -1;
}
int main(){
    char s1[20],s2[20];
    printf("Enter the first string:");
    scanf("%s",s1);
    printf("Enter the second string:");
    scanf("%s",s2);
   int r= check(&s1,&s2);
    if(r==0)
    printf("Strings are equal!");
    else
    printf("Strings are not equal");
}