// Vector Size
// To find out how many elements a vector has, use the .size() function:

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // calculate the side of the vector
    cout << cars.size() << endl;
    // output: 4
    // check a vectro empty or not
    cout << cars.empty() << endl;
    // output : 0 (false )
}

// Check if a Vector is Empty
// There is also a function to find out whether a vector is empty or not.

// The .empty() function returns 1 (true) if the vector is empty and 0 (false) if it contains one or more elements: