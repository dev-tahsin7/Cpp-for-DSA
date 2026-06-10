#include <iostream>
#include <iomanip> // need this for set precisions
using namespace std; 

int main()
{
    double d = 45.98702; 
    cout << fixed << setprecision(2) << d ; 

    return 0; 
}