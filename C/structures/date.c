#include<stdio.h>
#include<string.h>
int main(){
  typedef struct date{
    int month;
    int year;
    int day; 
  }date;
  date a,b;
  a.month=2;
  a.day=9;
  a.year=2000;
  b.day=9;
  b.month=02;
  b.year=2000;
  if(a.year==b.year && a.day==b.day && a.month==b.month)
  printf("Dates are same");
  else 
  printf("Dates are not equal");

  return 0;
    
}