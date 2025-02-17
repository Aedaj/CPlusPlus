//The comparison of unit to i and to c is an example of the most common form of selection
//A selection bsaed on comparison of a value against several constant
//C++ provides a special statement for it: the switch-statement
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
    constexpr double usd_to_euro = 0.96;
    constexpr double euro_to_yen = 156.83;

    double amount = 1;

    char currency = 0;
    cout<<"Please enter an amount followed by a currency (y for yen, e for euro, u for usd)";
    cin >> amount >> currency; 
    //1. The value on which we switch must be of an integer, char, or enum type. You cannot switch on a string.
    //2. The values in the case labels must be constant expressions. You cannot use a variable in a case label.
    //3. You cannot use the same value for two case labels
    //4. You can use several case labels for a single case
    //5. End each case with a break. 
    switch (currency){
    case 'u':
        cout << currency << "\nUSD == " << amount/yen_to_usd << " YEN\n" << amount*usd_to_euro << " EURO\n";
    case 'y':
        cout << currency << "\nYEN == " << amount * yen_to_usd << "USD\n" << amount/euro_to_yen << " EURO\n";
    case 'e': 
        cout << currency << "\nEUR == " << amount * euro_to_usd << "USD\n" << amount*euro_to_yen << " YEN\n";
    default:
        cout << "sorry, I dont know a unit called " << currency << "\n";
        break;
    }   

}
