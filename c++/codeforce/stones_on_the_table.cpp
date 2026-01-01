#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // sort(s.begin(),s.end());
    
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
    {
        c++;
        
    }
    }
    cout<<c<<endl;

}