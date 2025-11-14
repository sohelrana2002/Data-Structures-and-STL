// Remove Deque Elements

// To remove elements from a deque, use .pop_front() to remove an element
//  from the beginning of the deque and .pop_back() to remove an element at the end:

#include <iostream>
#include <deque>
using namespace std;

int main(){
    // create deque
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // remove element from front
    cars.pop_front();

    for(string car : cars){
        cout << car << endl;
    }
    // BMW  
    // Ford 
    // Mazda

    cars.pop_back();

    for(string car : cars){
        cout << car << endl;
    }
    // BMW
    // Ford
}