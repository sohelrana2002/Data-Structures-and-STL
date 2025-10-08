// Change a Vector Element
// To change the value of a specific element, you can refer to the index number:

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Change the value of the first element
    cars[0] = "Opal";

    cout << cars[0] << endl;
    // output: Opal

    // it is safer to use the .at() function:
    cars.at(2) = "Opal";

    cout << cars[2] << endl;
    // output: Opal
}