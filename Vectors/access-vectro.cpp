// Access a Vector
// You can access a vector element by referring to the index number inside square brackets [].
// Vectors, like arrays, are 0-indexed, meaning that [0] is the first element, [1] is the second element, and so on:

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // access element
    cout << cars[0] << endl;
    // output: Volve

    cout << cars[1] << endl;
    // output: BWM

    // access the first element
    cout << cars.front() << endl;
    // output: Volve

    // access the last element
    cout << cars.back() << endl;
    // output: Mazda

    // specific element
    cout << cars.at(2) << endl;
    // output: Ford

    // Try to access an element that does not exist (will throw an exception)
    cout << cars.at(6);
}

// first and last element
// One advantage of using the vector library, is that it includes many useful functions.
// For example, you can access the first or the last element of a vector
// with the .front() and .back() functions:

// specific indexed element
// To access an element at a specified index, you can use
// the .at() function and specify the index number: