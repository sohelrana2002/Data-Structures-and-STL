// Remove List Elements
// To remove elements from a list, use .pop_front() to remove an element
// from the beginning of the list and .pop_back() to remove an element at the end:

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cars.pop_front();
    cars.pop_back();

    for (string car : cars)
    {
        cout << car << endl;
    }
}