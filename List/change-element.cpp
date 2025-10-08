// Change a List Element
// You can also change the value of the first or the last element with
//  the .front() and .back() functions

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cars.front() = "Opal";

    cars.back() = "Toyota";

    cout << cars.front() << endl;
    // output: Opal

    cout << cars.back() << endl;
    // output: Toyota
}