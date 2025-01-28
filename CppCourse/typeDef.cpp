#include <iostream>
#include <vector> 

// reserved keyword used to create an additional name (alias) for another data type. 

typedef std::vector<std::pair<std::string, int>> pairlist_t; //_t for type
typedef std::string text_t;
using number_t = int;
int main(){
    text_t firstName = "Aedan";
    pairlist_t pairlist; 
    std::cout << firstName << '\n';
    return 0;
}