#include<stdio.h>
int main(){
    int r,c;

    printf("Enter the number of rows :");
    scanf("%d",&r);
    printf("Enter the number of colmns:");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements:\n");
    
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        scanf("%d",&a[i][j]);
        
    }
    printf("\n\n");
    //spiral  print
   int minr=0;
   int maxr=r-1;
   int minc=0;
   int maxc=c-1;
   int count=0;
   int t=r*c;
   while (count<t)
   {
    //print minimum row elements
    for(int j=minc;j<=maxc;j++){
        printf("%d ",a[minr][j]);
        count++;
    }
    ++minr;
    if(count>=t) break;
   //print maximum column elements
   for(int i=minr;i<=maxr;i++){
        printf("%d ",a[i][maxc]);
        count++;
   }
   --maxc;
    if(count>=t) break;
   //print maximum row elements in reverse order
   for(int j=maxc;j>=minc;j--)
        {
            printf("%d ",a[maxr][j]);
            count++;
        }
    --maxr;
     if(count>=t) break;
    //print minimum column elements in reverse order
    for(int i=maxr;i>=minr;i--)
        {
            printf("%d ",a[i][minc]);
            count++;
        }
    ++minc;
     if(count>=t) break;

   }
        

    return 0;

}  