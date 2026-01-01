#include<stdio.h>
int main(){
    FILE *p=fopen("test.txt","r");
    char s[100];
    char s2[]="hey how are you doing?";
    while(fgets(s,10,p)!=NULL)
    printf("%s",s);
    FILE *ptr=fopen("ak.txt","w");

    fputs(s2,ptr);
    fputs("\nthis is newwwwwwwwwwwwwww string",ptr);
    fclose(ptr);


}