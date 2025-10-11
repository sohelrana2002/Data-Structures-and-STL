// Remove Elements
// You can use the .pop() function to remove an element from the stack.

// This will remove the last element that was added to the stack:

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // create a stack
    stack<string> cars;

    // add element to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // remove the last added element (mazda )
    cars.pop();

    // access the element
    cout << cars.top() << endl;
    // output: Ford
}