// Defining a function inside a class is called Method.

/*
    There are two ways to define a method in a class:
        1)Inside the class.
        2)Outside the class.
*/

#include<iostream>
using namespace std;

class Student{
    public:
        string name(string &s){
            cin>>s;
            return s;
        }
};

int main(){
    string s;
    Student One;
        One.name(s);
    cout<<s<<"\n";
}

