#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name; 
    int roll;
        
    Student(string name, int roll){
        this->name = name; 
        this->roll = roll; 
    }

    void hello(){
        cout << "Hello" << endl; 
    }

};

int main() {
    Student obj1("Tahsin", 23); 
    obj1.hello();
    cout << obj1.name << endl; 
    return 0;
}