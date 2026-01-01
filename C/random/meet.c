#include<stdio.h>
int main(){
int m1,m2,x1,x2,y1,y2,x3,y3;
printf("enter your points:");
scanf("%d%d%d%d%d%d",&x1,&x2 ,&x3, &y1, &y2, &y3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);
if(m1==m2){
    printf("collinier");
}
 else {
    printf("non collinier");
 
 }
    
return 0;



}