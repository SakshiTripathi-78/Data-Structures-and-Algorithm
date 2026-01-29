#include<iostream>
#include<vector>
using namespace std;

void mul(vector<int>sakshi){
    int mul=1;
    for(auto it:sakshi){
        mul=mul*it;
    }
    cout<<mul;
}
int add(vector<int>&sakshi){
    int sum=0;
    for(auto it:sakshi){
        sum+=it;
    }
    mul(sakshi);
    sakshi[2]=4;
    return sum;
}

int main(){
    vector<int>arr={1,2,3,4,5};  //loc;- #101ff
    cout<<add(arr)<<"\n";
    for(auto it:arr){
        cout<<it<<" ";
    }
}