// Get the Size of the Stack
// To find out how many elements a stack has, use the .size() function:
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

    // size of stack
    cout << cars.size() << endl;
    // output: 4
}