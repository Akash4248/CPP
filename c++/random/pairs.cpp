#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int, int> p={1,2};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int ,int>> c={1,{4,6}};
    cout<<p.first<<endl<<c.second.second<<endl<<c.second.first;
}