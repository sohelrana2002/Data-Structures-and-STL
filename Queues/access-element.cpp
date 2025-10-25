// Access Queue Elements
// You cannot access queue elements by referring to index numbers, like you would with arrays and vectors.

// In a queue, you can only access the element at the front or the back,
//  using .front() and .back() respectively:

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // create a queue
    queue<string> cars;

    // add an element
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // access element
    cout << cars.front() << endl;
    // output: Volvo

    cout << cars.back();
    // output: Mazda
}