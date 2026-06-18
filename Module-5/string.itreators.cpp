#include <bits/stdc++.h>
using namespace std; 

int main(){
    // string iterators - begin() & end()
    // begin() -> point to the beginning 
    // end() -> point to the after the last 

    string s = "Sejuti"; 
    // if I want to iterate 
    for (string:: iterator it = s.begin(); it<s.end(); it++){
        cout << *it << endl; 
    }

    // we can also do that using auto keyword insted of string:: iterator 
    
}