#include <bits/stdc++.h>
using namespace std; 

int main(){
    // stringstream - word by word আলাদা করে বের করে দেয়। 
    string name; 
    // cin.ignore(); 
    getline(cin, name); 

    stringstream obj1(name); 
    string word; 
    int count; 
    while(obj1 >> word){
        cout << word << endl; 
        count++; 
    }
    cout << count << endl; 
}