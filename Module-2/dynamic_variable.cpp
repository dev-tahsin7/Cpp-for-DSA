#include <bits/stdc++.h>
using namespace std; 

int main()
{
    // Dynamic Variable 
    int x = 10 ; // it's a static variable 
    int *p = new int; // dynamic variable 
    *p = 100; 
    cout << *p ; 
    // এইখানে কি ঘটে? new এর মাধ্যমে আমরা হিপ মেমোরি এক্সেস করতে পারি
    // এবং হিপ মেমোরি আমাদের এড্রেস রিটার্ন করে, ফলে আমরা একটা পয়েন্টারে সেটা স্টোর করি 
    // এবং তাঁর মাধ্যমে মেমোরি এক্সেস করে, ভ্যালু সেট করি, এইভাবেই আমরা ডায়নামিক ভ্যারিএবল ব্যবহার করতে পারি 
    

}

