#include <bits/stdc++.h>
using namespace std; 

int main()
{
    // string modifiers 
    string s = "Sejuti"; 
    string t = "Tahsin";
    
    // append 
    s += t ; 
    cout << s << endl; 
    cout << s.append(t) << endl; 
    s.push_back('a'); // need to to like that to add last 
    cout << s << endl; 
    s.pop_back(); 
    cout << s << endl; 
    
    // erase, replace, insert 
   // t.erase(index, count)
   // t.insert(index, "text")
   // t.replace(index, count, "text")
   



}