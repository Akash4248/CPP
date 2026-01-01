#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// this problem is to print indiviual words given in a string.

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int a=0,b=0;
    //Write your logic to print the tokens of the sentence here.
    for(int i=0;i<strlen(s);i++)
    {  
        
      if(s[i]==' ' || i==strlen(s)-1) //whenever space occurs print the word from begining to space .
      {
      b=i;
      for(int j=a;j<=b;j++)
      printf("%c",s[j]);
      a=i+1;
      printf("\n");

      }
      
    }
    return 0;
}