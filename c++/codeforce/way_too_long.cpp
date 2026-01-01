#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
   
   int n;
   cin>>n;
    
   for(int i=0;i<n;i++)
   {
    string word;
    cin>>word;
    string output;
    int l=word.length();
    if(l>10)
    {
        output=word[0]+to_string(l-2)+word[l-1];
    }
    else
    output=word;
    cout<<output<<endl;
   }
    return 0;
}