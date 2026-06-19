#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name; 
    int roll; 
    char section; 

    Student(string name, int roll, char section){
        this->name = name; 
        this->roll = roll; 
        this->section = section; 
    }
}; 

int main() {
    Student* obj1 = new Student("Tahsin", 23, 'A'); 
    Student* obj2 = new Student("Sejuti", 29, 'L'); 
    *obj2 = *obj1; 
    delete obj1 ; 

    cout << obj2->name << endl; 
    return 0;
}