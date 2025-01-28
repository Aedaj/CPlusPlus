#include <iostream>

namespace first {
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first; 
    // using namespace std OR
    // using std::cout; 
    int x = 0;

    std::cout << first::x;

    return 0;
}