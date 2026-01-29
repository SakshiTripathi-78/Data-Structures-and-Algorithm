/*
    Here we use scope resolution operator
    (::)
*/

#include<iostream>
using namespace std;

class student{
    public:
    string name(string &s);
};

string student::name(string &s){
    cin>>s;
    return s;
}

int main(){
    string s;
    student One;
    cout<<One.name(s)<<"\n";
}