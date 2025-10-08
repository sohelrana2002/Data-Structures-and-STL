// Add Vector Elements
// The biggest difference between a vector and an array is that vectors can grow dynamically. That means you can add or remove elements from the vector.

// To add an element to the vector, you can use the .push_back() function, which will add an element at the end of the vector:

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // add a new element
    cars.push_back("Tesla");

    // access last element
    cout << cars.back() << endl;
    // output: Tesla

    // add one more element
    cars.push_back("Mini");

    cout << cars.back() << endl;
    // output : Mini
}
