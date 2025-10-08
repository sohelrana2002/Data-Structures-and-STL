// List Size
// To find out how many elements a list has, use the .size() function:

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars.size();
    // output: 4

    cout << cars.empty();
    // output: 0

    return 0;
}

// Check if a List is Empty
// Use the .empty() function to find out if a list is empty or not.

// The .empty() function returns 1 (true) if the list is empty and 0 (false) otherwise: