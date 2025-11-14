// Remove Elements
// To remove specific elements from a set, you can use the .erase() function:

#include <iostream>
#include <set>
using namespace std;

int main(){
    // create a set
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cars.erase("BMW");

    for(string car : cars){
        cout << car << ", ";
    }
    // output: Ford, Mazda, Volvo,

    // To remove all elements from a set, you can use the .clear() function:

    // remove all elements
    cars.clear();

    set<int> numbers = {2, 1, 5, 4, 5, 10};
    // find the size of the set
    cout << "\n" << numbers.size();
    // output: 5 count the duplicate element as one 
    

}