#include <iostream>

int main(){

    int x; //declaration
    x = 5; //assignment
    std::cout << x << std::endl; 

    //integer (whole number)
    int age = 22;
    int year = 2025;
    int days = 7; 

    //double (number including decimal)
    double price = 10.99;
    double GPA = 4.31; 
    double temperature = 25.1;
    std::cout << price << std::endl; 

    // single character
    char grade ='A';
    char initial = 'C';
    char currency = '$';

    //boolean (true or false)
    bool student = true;
    bool power = true;

    // string (objects that represent a sequence of text)
    std::string name = "Aedan";

    std::cout << name;

    return 0;

    int result = 0;              // Declare and initialize an integer.
    double coefficient = 10.8;   // Declare and initialize a floating
                                // point value.
    auto name = "Lady G.";       // Declare a variable and let compiler
                                // deduce the type.
    auto address;                // error. Compiler cannot deduce a type
                                // without an intializing value.
    age = 12;                    // error. Variable declaration must
                                // specify a type or use auto!
    result = "Kenny G.";         // error. Can't assign text to an int.
    string result = "zero";      // error. Can't redefine a variable with
                                // new type.
    int maxValue;                // Not recommended! maxValue contains
                                // garbage bits until it is initialized.
}