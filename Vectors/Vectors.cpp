// A vector in C++ is like a resizable array.
// Both vectors and arrays are data structures used to store multiple elements of the same data type.
// The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array).
// A vector however, can grow or shrink in size as needed.
// To use a vector, you have to include the <vector> header file:

// Create a Vector
// To create a vector, use the vector keyword, and specify the type of
// values it should store within angle brackets <> and then the name of the vector,
// like: vector<type> vectorName.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
    for (string car : cars)
    {
        cout << car << "\n";
    }
    return 0;
}
