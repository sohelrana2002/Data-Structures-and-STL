// Add Elements
// To add elements to the queue, you can use the .push() function after declaring the queue.

// The .push() function adds an element at the end of the queue:

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
}