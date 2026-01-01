#include<stdio.h>

int main()
{
    int day;
    prointf("Enter the day number from sunday to monday(1-7)");
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("sunday");
        break;
        case 2:printf("monday");
        break;
        case 3:printf("tuesday");
        break;
        case 4:printf("wednesday");
        break;
        case 5:printf("thursday");
        break;
        case 6:printf("monday");
        break;
        case 7:printf("monday");
        break;

    }
}