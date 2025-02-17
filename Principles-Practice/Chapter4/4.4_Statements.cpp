// 4.4 Statements
//What do we do when we want to produce several values? When we want to do something many times? When we want to choose among alternatives? When we want to get input or product output?

//As in many languages, you use language constructs called **statements** to express those things. 

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    constexpr double yen_to_usd = 0.0066;
    constexpr double euro_to_usd = 1.04;
    double amount = 1;

    char currency = 0;
    cout<<"Please enter an amount followed by a currency (y for yen, e for euro, u for usd)";
    cin >> amount >> currency; 
    if (currency == 'y')
            cout << amount << "yen == " << yen_to_usd*amount << "USD\n"
            << (yen_to_usd*amount)/euro_to_usd << "EURO\n"; 
    else if (currency == 'u')
            cout << amount << "usd == " << amount/yen_to_usd << "YEN\n"
            << (amount)/euro_to_usd << "EURO\n"; 
    else if (currency == 'e')
            cout << amount << "eur == " << (amount*yen_to_usd)/euro_to_usd << "YEN\n"
            << (amount)/euro_to_usd << "EURO\n"; 

}
