// Add List Elements
// To add elements to a list, you can use .push_front() to insert an element
//  at the beginning of the list and .push_back() to add an element at the end:

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cars.push_front("Tesla");
    cars.push_back("Toyota");

    cout << cars.front() << endl;
    // output: Tesla

    cout << cars.back() << endl;
    // output: Toyota
}