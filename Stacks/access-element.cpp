// Access Stack Elements
// You cannot access stack elements by referring to index numbers, like you would with
//  arrays and vectors.

// In a stack, you can only access the top element, which is done using the .top() function:

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // create a stack
    stack<string> cars;

    // push in stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // access element
    cout << cars.top() << endl;
    // output: Mazda
}