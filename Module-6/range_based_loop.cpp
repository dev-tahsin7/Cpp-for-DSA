#include <bits/stdc++.h>
using namespace std;

int main() {
    string name = "Tahsin"; 
    // normal loop 
    // for (int i = 0; i < name.size(); i++){
    //     cout << name[i] << endl; 
    // }

    // range based loop 
    // for (datatype name: variable_name)
    for (char x : name){
        cout << x << endl; 
    }
    return 0;
}