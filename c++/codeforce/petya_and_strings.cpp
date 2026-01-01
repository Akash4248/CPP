#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    string s,a;
    cin>>s>>a;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z' )
        s[i]=s[i]-'A'+'a';
        if(a[i]>='A' && a[i]<='Z')
        a[i]=a[i]-'A'+'a';
    }
    int k,sum=0,sum2=0;
    for(int i=0;i<s.length();i++)
    {   k=(int)s[i];
        sum+=k;
        sum2+=(int)a[i];

    }
    sort(s.begin(),s.end());
    sort(a.begin(),a.end());
    cout<<s<<endl;
    cout<<a<<endl;
    // int l=s.length();
    // cout<<l<<endl;
    cout<<sum2<<endl;
    cout<<sum<<endl;
        if(sum<sum2)
        n=-1;
        else  if(sum==sum2)
        n=0;
        else
        n=1;
    cout<<n<<endl;
    
    
}