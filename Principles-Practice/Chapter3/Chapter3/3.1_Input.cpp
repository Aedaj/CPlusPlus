/*We need somewhere in the computer's memory to place what we read. We can such a "place" an object. 
An 'object' is a region of memory with a type that specifies what kind of information can be placed in it. 
A named object is called a variable.  
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() {char ch; cin>>ch;}

int main()
{

cout << "please enter first name (followed by 'enter':) \n";
//Such a message is typically called a prompt
string first_name;
cin >> first_name; // cin = standard input stream. '>> operator' = "get from"
cout << "Hello, " << first_name << "!\n";
keep_window_open();
return 0;

}