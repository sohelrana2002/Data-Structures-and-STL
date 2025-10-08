// Loop Through a List
// You cannot loop through the list elements with a traditional for loop combined
// with the .size() function, since it is not possible to access elements in a list by index:

// You cannot loop through the list elements with a traditional for loop combined with the .size() function, since it is not possible to access elements in a list by index:

#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Create a list called cars that will store strings
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print list elements
    for (string car : cars)
    {
        cout << car << endl;
    }
}

// output :
// Volvo
// BMW
// Ford
// Mazda