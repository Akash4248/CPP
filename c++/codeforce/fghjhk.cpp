#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char gender[100];
    cin>>gender;

    int length=strlen(gender);
    int c=0; 

    for(int i =0;i<length;i++) {
        bool found=false;
        for(int j=0;j<i;j++) { 
         if(gender[i]==gender[j]) {
            found=true;
                break;
            }
        }
        if(!found) { 
         c++;
        }
    }

    if(c%2==0) { 
        cout<<"CHAT WITH HER!";
    } else {
        cout<<"IGNORE HIM!";
    }

    return 0;
}