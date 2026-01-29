/*
Create a class called Book with the following attributes:

title (string)
author (string)
year (int)
Then create two objects of the class and print their attribute values.
*/

#include<iostream>
using namespace std;

class Book{ //class mein c small hota hai.
    public: //Iska matlab class ke bahar se bhi isko use kiya jaa sakta hai.
    string title;
    string author;
    int year;
};

int main(){
    //Now create objects.
    Book first;
    first.title="Matilda";
    first.author="Roald Dahl";
    first.year=1988;

    Book second;
    second.title="The Giving Tree";
    second.author="Shel Silverstein";
    second.year=1964;

    cout<<first.title<<","<<first.author<<","<<first.year<<"\n";
    cout<<second.title<<","<<second.author<<","<<second.year<<"\n";
}