//Initialisation/assignment, represented as = gives a variable a new value.
//Logically, assignment and initialisation are different. An initialisation always finds the variable empty
//Assignment (in principle) must clear out the old value from the variable before putting in the new value. 
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


//Detects adjacent repeated words in a sequence of words.
int main(){

    string previous = " "; //Previous word. Initialising variable as an empty string. 
    string current; 
    while (cin >> current){ //read a stream of words
        if(previous == current) // Check if the word is the same as last
            cout << "repeated word: " << current << '\n';
    previous = current;
    }
}