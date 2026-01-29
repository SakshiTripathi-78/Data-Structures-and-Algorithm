#include<iostream>
using namespace std;

int add(int a,int b){
    int c=a+b;
    return c;
}

int sub(int a,int b){
    int c=a-b;
    return c;
}

double division(int a,int b){
    double c=a/b;
    return c;
}

double mul(int a,int b){
    int c=a*b;
    return c;
}

int main(){
    int a,b;
    cin>>a>>b;
    // int ans1=add(a,b);
    // int ans2=sub(a,b);
    // double ans3=division(a,b);
    // double ans4=mul(a,b);
    cout<<add(a,b) <<sub(a,b) <<division(a,b) <<mul(a,b) <<"\n";
}