#include<stdio.h>
int main(){
    FILE *p;
    char s[10]="HOW are u";
    char s1[10];
    p=fopen("akash.txt","w");
    if(p==NULL)
    {
        fputs(s,p);
    }
    fputs(s,p);
    while(fgets(s1,1,p)!=NULL)
    printf("%s",s1);
    fclose(p);

}//not working