#include<iostream>
using namespace std;
int main(){
    
    
    int n,f;
    f=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
        for(int i=0;i<n;i++)
        {
            if(s[i]=="Tetrahedron")
            {
                f+=4;
            }
            else if(s[i]=="Cube")
            {
                f+=6;
            }
            else if(s[i]=="Octahedron")
            {
                f+=8;
            }
           else if(s[i]=="Dodecahedron" )
            {
                f+=12;
            }
            else
            {
                f+=20;
            }

        }
        cout<<f<<endl;

    
}