#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
      int found=1;
      
      int same=1;
      int count=0;
        if(n>1)

        for(int i=1;i<=4*n;i+=2)
        {   
            if( same==1)
            {
            for(int j=1;j<=2*n;j+=2)
            {
               if(found==1)
                cout<<"##";
                else
                cout<<"..";
               if(found==1)
               found=0;
               else
               found=1;
                
            }
            cout<<endl;
            count++;
            }
            else
            {   
               
                for(int j=1;j<=2*n;j+=2)
            {
               if(found==0)
                cout<<"##";
                else
                cout<<"..";
               if(found==1)
               found=0;
               else
               found=1;
                
            }
            cout<<endl;
            count++;
            }

            if(found==1 &&n%2!=0)
               found=0;
               else
               found=1;
           if(count==2)
           {
            if(same==1)
            same=0;
            else
            same=1;

            count=0;
           }
           
        }
        else
        for(int i=0;i<2*n;i++)
        {
            for(int j=0;j<2*n;j++)
            cout<<"#";
            cout<<endl;
        }
    }
}