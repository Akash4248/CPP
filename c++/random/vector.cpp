#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int > a;//creates a empty vector
    a.push_back(4);//pushes 4 to empty vector a
    a.emplace_back(5);//same as pushback but faster

    vector<pair<int,int>> vect;
    vect.push_back({5,4});
    vect.emplace_back(3,4);

    vector<int > v(5,100);
    
}