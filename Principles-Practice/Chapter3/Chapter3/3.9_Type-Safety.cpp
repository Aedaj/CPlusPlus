//There are ways of doing operations that are not type-safe. For example, using a variable before it has been initialised is not considered type-safe.

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

//For example
int main(){
    double x; // we forgot to initialise
              // the value of x is undefined
    double y = x;   //the value of y is undefined
    double z = 2.0 + x; // the meaning of + and the value of z are undefined
}   
//Always intialise variables! 