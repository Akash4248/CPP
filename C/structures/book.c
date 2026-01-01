#include<stdio.h>
#include<string.h>
int main(){

    struct book
    {
        char name[50];
        int noOfpages;
        float price;
    }a,b,c;
   strcpy(a.name,"Secret seven");
   a.noOfpages=400;
   a.price=300;
   printf("%d\n",a.noOfpages);
    printf("%s\n",a.name);
    printf("%d\n",a.price);
    
    return 0;

}