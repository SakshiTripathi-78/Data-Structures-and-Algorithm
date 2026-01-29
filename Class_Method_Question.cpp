/*
Create a class Dog with a method bark() that prints "Woof!".

Then call that method from main() using an object of the class.

*/

#include<iostream>
using namespace std;

class animal{
    public:
    void bark(){
        cout<<"woof"<<"\n";
    }
};

int main(){
    animal dog;
    dog.bark();
}

