#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char *s;
   int n,f=0;
   s=malloc(1024 * sizeof(int));
   scanf("%s",s);
   for(int i=0;i<strlen(s);i++)
   {    f=0;
    //    n=(int)s[i];
    //    if(((97<n)&&(n>122)) || ((65<n)&&(n<90)))
    //    continue;
    //    else
       for(int j=0;j<strlen(s);j++)
       if(s[j]==s[i] && i!=j)
       f=f+1;
       printf("%d ",f);
   }
   
    return 0;
}
