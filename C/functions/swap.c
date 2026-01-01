#include<stdio.h> 
// void swap(int* x,int* y){ //FIRST METHOD USING TEMP VARIABLE

//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
//     return;
// }


void swap(int* x,int* y){//SECOND METHOD WITHOUT USING TEMP
                // WE CAN CHANGE THE VALUE OF A VARIABLE USING POINTER
   *x=*x+*y;    //*X MEANS VALUE OF VARIABLE WHOSE ADRESS IS STORED IN X
   *y=*x-*y;    //*Y MEANS VALUE OF VARIABLE WHOSE ADRESS IS STORED IN Y
   *x=*x-*y;
    return;
}

int main(){
    int a;
    int b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a is:%d\n",a);
    printf("value of b is :%d\n",b);
    
   
    return 0;
}