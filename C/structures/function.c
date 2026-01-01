 #include<stdio.h>
#include<string.h>
typedef struct date{
    int month;
    int year;
    int day; 
  }date;
  void change(date d){
    d.day=78;
    d.month=9;
    

  }
int main(){
  
  date a,b;
  a.month=2;
  a.day=9;
  a.year=2000;
  b.day=9;
  b.month=02;
  b.year=2000;
  

  return 0;
    
}