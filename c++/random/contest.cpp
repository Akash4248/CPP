#include <iostream>
using namespace std;
void lucky(int x) {
int i=0;
char l[20];


   string s=to_string(x);
   int len=s.length();
   int temp;
   for (int i = 0; i < len; i++)
{
l[i]=s[i];
}
    for (int i = 0; i < len; i++)
    {
        if (l[i]==4||l[i]==7)
        {temp++;
    
        }
        
    }if (temp==4||temp==7){
        cout<<"YES";
    }else
    {cout<<"NO";        
        
    }
    
    

    
}

int main() {
    int num ;
    cin>>num;
    
    lucky(num);
    return 0;
}
