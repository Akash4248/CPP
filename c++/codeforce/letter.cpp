#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int l1[256];
 
    int j=0;
    for(char i:a)
    {
        if(i!=' ')
        l1[j]++;
        j++;
        
    }

}