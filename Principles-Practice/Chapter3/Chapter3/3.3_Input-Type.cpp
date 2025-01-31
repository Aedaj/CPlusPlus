/*The input operation >> ("get from") is sensitive to type; it reads according to the type
of variable you read into*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() {char ch; cin>>ch;}

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name;
    int age;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name <<"(age" << age << ")\n";
}

// It doesn't read all of int + string into first_name because reading of strings is terminated by 'whitespace'.
// space, newline and tab characters.