// Change a Deque Element
// To change the value of a specific element, you can refer to the index number:

// However, it is safer to use the .at() function:

#include <iostream>
#include <deque>
using namespace std;

int main(){
    // create a deque
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // change element by square bracket
    cars[0] = "Opel";

    cout << "First element: " << cars[0] << endl;
    // output : Opel;
    
    // change element using at function
    cars.at(3) = "Opel also";
    cout << "last element: " << cars.at(3) << endl;
    // output: Opel also
}