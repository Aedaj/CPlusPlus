
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int square(int x)
{
    int i = 0;
    for(int counter = 0; counter < x; ++counter)
    {
        i = i + x;
    }

return i;
}

int main(){
    int i = 0;
    while (i<100){
        cout << i << "\t" << square(i) << '\n';
        ++i;
    }
}

//4.4.2.2 Blocks
//A sequence of statements delimited by curly braces { and } is called a block or a compound statement.
//The wmprt vloxk {} is sometimes useful for expressing that nothing is to be done.
int block(){
    int a;
    int b;
    if (a<=b){

    }
    else{
        int t =a;
        a = b;
        b = t;
    }
}