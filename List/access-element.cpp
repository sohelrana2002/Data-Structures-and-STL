// Access a List
// You cannot access list elements by referring to index numbers, like with arrays and vectors.

// However, you can access the first or the last element
//  with the .front() and .back() functions, respectively:

#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Create a list called cars that will store strings
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars.front() << endl;
    // output: Volvo
    cout << cars.back() << endl;
    // output:Mazda
}