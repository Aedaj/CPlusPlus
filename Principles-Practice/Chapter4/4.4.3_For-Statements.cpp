#include <iostream>
#include <vector>
#include <cctype>  // For character-related functions like isdigit()

using namespace std;

// Function to calculate the square of a number (to demonstrate the loop logic)
int square(int n) {
    return n * n;
}

/* ---------------------------------
 *  SECTION 1: Regular for-loop example
 *  Calculate and print a table of squares of numbers in the range [0:100).
 ---------------------------------- */

void tableOfSquares() {
    cout << "Table of squares for numbers in the range [0:100):\n";
    for (int i = 0; i < 100; ++i) {
        cout << i << '\t' << square(i) << '\n';
    }
    cout << "\n";
}

/* ---------------------------------
 * SECTION 2: Comparison between for-loop and equivalent while-loop
 * Demonstrating that any for-loop can be rewritten as a while-loop.
 ---------------------------------- */

void forVsWhileComparison() {
    cout << "For-loop vs. equivalent while-loop demonstration:\n";

    // Using a for-loop
    cout << "Using for-loop:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "i = " << i << '\n';
    }

    // Equivalent while-loop
    cout << "\nUsing while-loop:\n";
    int j = 0;  // Initialize outside the loop
    while (j < 5) {
        cout << "j = " << j << '\n';
        ++j;  // Increment inside the loop
    }

    cout << "\n";
}

/* ---------------------------------
 * SECTION 3: Why modifying the loop variable inside the body is a bad idea
 * Demonstrating the common mistake of modifying the loop variable inside the loop body.
 ---------------------------------- */

void badLoopExample() {
    cout << "Bad for-loop example (modifying the loop variable inside the loop body):\n";
    for (int i = 0; i < 100; ++i) {
        cout << i << '\t' << square(i) << '\n';
        ++i;  // BAD: Modifying the loop variable inside the loop body
    }
    cout << "Notice that only even numbers are printed due to the double increment.\n\n";
}

/* ---------------------------------
 * SECTION 4: Correct way to increment by 2
 * Demonstrating a cleaner and more maintainable way to print squares of even numbers.
 ---------------------------------- */

void squaresOfEvenNumbers() {
    cout << "Table of squares of even numbers in the range [0:100):\n";
    for (int i = 0; i < 100; i += 2) {
        cout << i << '\t' << square(i) << '\n';
    }
    cout << "\n";
}

/* ---------------------------------
 * SECTION 5: Using a for-loop to display character tables
 * Rewrite of the previous character value example to use a for-loop.
 ---------------------------------- */

void characterTables() {
    cout << "Character and their corresponding integer (ASCII) values:\n";

    // Print lowercase letters and their ASCII values
    for (char c = 'a'; c <= 'z'; ++c) {
        cout << c << '\t' << static_cast<int>(c) << '\n';
    }
    cout << "\n";




    // Print uppercase letters and their ASCII values
    cout << "Uppercase letters:\n";
    for (char c = 'A'; c <= 'Z'; ++c) {
        cout << c << '\t' << static_cast<int>(c) << '\n';
    }
    cout << "\n";

    // Print digits and their ASCII values
    cout << "Digits:\n";
    for (char c = '0'; c <= '9'; ++c) {
        cout << c << '\t' << static_cast<int>(c) << '\n';
    }
    cout << "\n";
}

/* ---------------------------------
 * SECTION 6: Range-based for-loop (C++11 and beyond)
 * Demonstrating the use of a range-based for-loop to iterate over a vector of integers.
 ---------------------------------- */

void rangeBasedForLoopExample() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Using range-based for-loop to print a vector of integers:\n";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n\n";
}

/* ---------------------------------
 * MAIN FUNCTION
 * Call all the examples sequentially.
 ---------------------------------- */

int main() {
    // Section 1: Simple for-loop example (table of squares)
    tableOfSquares();

    // Section 2: Comparison between for-loop and while-loop
    forVsWhileComparison();

    // Section 3: Bad loop example (modifying the loop variable inside the body)
    badLoopExample();

    // Section 4: Correct way to increment by 2 (cleaner and explicit)
    squaresOfEvenNumbers();

    // Section 5: Character tables with ASCII values
    characterTables();

    // Section 6: Range-based for-loop
    rangeBasedForLoopExample();

    return 0;
}
