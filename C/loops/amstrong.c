#include<stdio.h>
#include<math.h>
int main(){
   int n=153,x;
for(int i=2;i<=500;i++){
   int y=i;
   int sum=0;
   int z=i;

 while(z>0)
 {
   x=z%10;
   sum=sum+(x*x*x);//still not solved
   z=z/10;
  
} 
if(sum==y){
  
    printf("%d is an amstrong number\n",y);

 }


 
}
return 0;
}
