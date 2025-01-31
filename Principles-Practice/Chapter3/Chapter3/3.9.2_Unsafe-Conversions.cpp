#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

//For example
int main(){
    int a = 20000;
    char c = a; // try to squeeze a large int into a small char
    int b = c;
    if (a != b) // != means "not equal"
        cout << "oops!: " << a << "!=" << b << '\n';
    else
        cout << "Wow! We have large characters\n";
}
//Such conversions are called narrowing conversions because they put a value into an object that may be too small.