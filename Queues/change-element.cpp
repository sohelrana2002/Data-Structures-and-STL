// Change Front and Back Elements
// You can also use .front and .back to change the value of the front and back elements:
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
    cout << "Before " << cars.front() << endl;
    // output: Volvo

    cout << "Before " << cars.back() << endl;
    // output: Mazda

    // change element
    cars.front() = "Tesla";
    cars.back() = "VW";

    cout << "After " << cars.front() << endl;
    // output: Tesla

    cout << "After " << cars.back();
    // output: VW
}