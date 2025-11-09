// C++ Deque
// In the previous page, your learned that elements in a queue are added at the end 
// and removed from the front.

// A deque (stands for double-ended queue) however, is more flexible, as elements can
//  be added and removed from both ends (at the front and the back). 
//  You can also access elements by index numbers.

// Create a Deque
// To create a deque, use the deque keyword, and specify the type of values it should 
// store within angle brackets <> and then the name of the deque, like: deque<type> dequeName

#include <iostream>
#include <deque>
using namespace std;

int main(){
    // create a deque
    deque<string> cars = {"Volvo", "BMW", "Mazda", "Ford"};

    // print deque element 
    for(string car : cars){ //this loop called is range-based for loop
        cout << car << endl;
    }
}

// Note: The type of the deque (string in our example) cannot be changed after its been declared.