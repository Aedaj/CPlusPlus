/*Composite assignment operators in Cpp:
++
+=
-=
*=
*/

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


//Detects adjacent repeated words in a sequence of words.
int main(){
    int number_of_words = 0; 
    string previous = " "; //Previous word. Initialising variable as an empty string. 
    string current; 
    while (cin >> current){ //read a stream of words
        ++number_of_words;
        if(previous == current) // Check if the word is the same as last
            cout << "repeated word: " << current << '\n'
             << "number of words: " << number_of_words;
    previous = current;
    }
}