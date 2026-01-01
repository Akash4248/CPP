#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int val;
    node*r;
    node*l;
    node(int val){
        this->val=val;
        this->r=r;
        this->l=l;
    }
};
class exp{
    node*root;
    exp(){
        root=NULL;
    }
    node*exptree(string&s){
        stack<node*> value;
        stack<node*>op;
        for(int i=s[i];i<=s.length();i++){
            node*temp=new node(s[i]);
            if(s[i]>=48&&s[i]<=57||s[i]>=65&&s[i]<=90 || s[i]>='A'&&s[i]<='Z'){
                 vale.push(s[i]);
            }

        }
    }
};
