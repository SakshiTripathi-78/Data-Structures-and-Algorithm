// Linear Search!
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"\n What should be the size of the array : ";
    cin>>x;
    cout<<"\n";
    int arr[x];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<"Your array is : ";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int n;
    cout << "\n Enter the element which you want to search : ";
    cin >> n ;
    int temp=0;
    for(int i=0;i<x;i++){
        if(arr[i]==n){
            temp=1;
            break;
        }
    }
    if(temp==1){
        cout<<"\nElement is present in the array!\n";
    }
    else{
        cout<<"\nElement not present in the array!\n";
    }
}