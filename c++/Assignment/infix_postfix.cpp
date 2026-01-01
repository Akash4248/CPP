#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int precedence(char symbol){
    switch (symbol)
    {
    case '^': 
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        break;
    }
}
int topost(stack<char> s,string infix){
    int i=0,j=0;
    string post="";
    char c;
    for(i=0;infix[i]!='\0';i++){
         c=infix[i];
        if(isalnum(c)){
            post+=c;
        }
        else
        {
            switch(c){
                case '(':
                    s.push(c);
                    break;
                case ')':
                    while(c!='('){
                        post+=s.top();
                        s.pop();
                        c=s.top();
                    }
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                        while (precedence(c)>=s.top() && s.size() && c!='(')
                        {
                           post+=s.top();
                           s.pop();
                        }
                        s.push(c);
            }
        }
    }
    while (infix[i])
    {
        /* code */
    }
    
}
int main(){
    stack<char > s;

    
}