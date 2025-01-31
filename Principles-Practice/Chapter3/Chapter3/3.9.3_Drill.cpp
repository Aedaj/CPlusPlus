//This drill is to write a program that produces a simple form letter based on user input

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    string first_name = "";
    cout << "Enter the name of the person you want to write to.\n";
    cin >> first_name; 
    cout << "Dear " << first_name << ",\n"
    << "How are you? I am fine. I miss you.";
    cout << "Enter the name of another friend"; 
    return 0;
}