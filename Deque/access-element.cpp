// Access a Deque
// You can access a deque element by referring to the index number inside square brackets [].

// Deques are 0-indexed, meaning that [0] is the first element, [1] is the second element, 
// and so on:

#include <iostream>
#include <deque>
using namespace std;

int main(){
    // create a deque
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // access element by indexing
    cout << "First element of deque: " << cars[0] <<endl;

    // access first element
    cout << "First element: " << cars.front() << endl;

    // access last element 
    cout << "Last element: " << cars.back() << endl;

    // access second index
    cout << "Second index: " << cars.at(2) <<endl;

    // access the element out of the range
    cout << "Out of the range: " << cars.at(6) << endl;

    // error: terminate called after throwing an instance of 'std::out_of_range'
    // what():  deque::_M_range_check: __n (which is 6)>= this->size() (which is 4)
}

// You can also access the first or the last element of a deque 
// with the .front() and .back() functions:

// To access an element at a specified index, you can use the .at() function 
// and specify the index number:

// Note: The .at() function is often preferred over square brackets [] because 
// it throws an error message if the element is out of range: