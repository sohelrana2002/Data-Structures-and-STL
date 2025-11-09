// Add Deque Elements
// To add elements to a deque, you can use .push_front() to insert 
// an element at the beginning of the deque and .push_back() to add an element at the end:

#include <iostream>
#include <deque>
using namespace std;

int main(){
    // create a deque
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // add element at front
    cars.push_front("Opel");
    cars.push_back("Tesla");

    cout << "Firts element: " << cars.front() << endl;
    // output:  Firts element: Opel

    cout << "Last element: " << cars.back() << endl;
    // output: Last element: Tesla
}