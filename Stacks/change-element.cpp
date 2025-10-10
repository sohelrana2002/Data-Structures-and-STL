// Change the Top Element
// You can also use the .top function to change the value of the top element:

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Create a stack of strings called cars
    stack<string> cars;

    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // change the element
    cars.top() = "Tesla";

    // access element
    cout << cars.top() << endl;
    // output: Tesla
}