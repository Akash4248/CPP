 




#include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);                    //gets(str)
    // Using built-in functions
    printf("Length of the string: %d\n",  strlen(str));
    printf("Uppercase string: %s\n", strupr(str)); // Convert to uppercase
    printf("Lowercase string: %s\n", strlwr(str)); // Convert to lowercase
    printf("Reversed string: %s\n", strrev(str)); // Reverse the string
    // Using character functions
    char ch = 'a';
 printf("Is %c a digit? %s\n", ch, isdigit(ch) ? "Yes" : "No");
 char str1[50], str2[50];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    int result = strcmp(str1, str2);
    if (result == 0) 
   {
        printf("The strings are equal.\n");
    } 
else 
   {
        printf("The strings are not equal.\n");
    }
      strcat(str1, str2);  
    printf("Concatenated string: %s\n", str1); 
    return 0;
 }


//  #include <stdio.h>
//  int main() {
//   long  long int n, first = 0, second = 1, next;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series:\n");
//     while (n > 0) 
//     {
//         printf("%d, ",first);
//         next = first + second;
//         first = second;
//         second = next;
//         n--;
//     }
//     printf("\n");
//     return 0;

//  }
 
//   #include <stdio.h>
//  int main() 
// {
//     int base, exponent;
//     long result = 1;
//     printf("Enter base and exponent: ");
//     scanf("%d%d", &base, &exponent);
//     while (exponent != 0) 
//    {
//         result = result *base;
//         --exponent;
//     }
//     printf("Result: %ld\n", result);
//     return 0;
//  }
 
 
//  #include <stdio.h>
//  int main() 
// {
//     int N;
//     printf("Enter a number for the multiplication table: ");
//     scanf("%d", &N);
//     printf("Multiplication table for %d:\n", N);
//     for (int i = 1; i <= 10; i++) 
//    {
//         printf("%d  x  %d  =  %d\t\t", N, i, N * i);
//        printf("%d  x  %d  =  %d\t\t", N, i+10, N * (i+10));
//        printf("%d  x  %d  =  %d\n", N, i+20, N * (i+20));
//     }
//     return 0;
//  } 