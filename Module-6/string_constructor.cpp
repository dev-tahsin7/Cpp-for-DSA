#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. string s("Hello")
    string s("Hello"); 
    cout << s << endl; 

    // 2. string t(s, value) -> value ফেলে দিবে। 
    string t(s, 2); 
    cout << t << endl;
    return 0;

    // 3. string x("Hello", value) -> value wise resize
    string x("Hello", 3); 
    cout << x << endl; 

    // 4. string y(value, 'Char) -> char রে ভ্যালু অনুযায়ী প্রিন্ট করবে। 
    string y(5, 'T'); 
    cout << y << endl; 
}