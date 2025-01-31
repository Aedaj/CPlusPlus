#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){

    cout << "Please enter a floating point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1== " << n+1
        << "\nn-1 == " << n-1
        << "\nn x 124 == " << 124 * n;  
}