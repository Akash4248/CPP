#include<iostream>
using namespace std;
int main(){
    int i,c=1;
    string s;

    
        cin>>s;
        i=1;
        while(s[i]!='\0')
        {
            if(s[i]==s[i-1])
            {
                c++;
                if(c==7)
                break;

            }
            else
            c=1;
            i++;
        }
        if(c==7)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    
    return 0;
}