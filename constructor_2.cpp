/* Agar hum constructor ko ek se zyada baar call karenge to ek hi baar print hoga ya
jitne baar call karenge utne baar call hoga?

Ans: Jitne baar call karenge utne baar print hoga.
*/

#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int roll_no;
        int marks;

    public:
        Student(){
            cout<<"I am the principle"<<"\n";
        }

};

int main(){
    Student s1 , s2 , s3;
}