// C++ Set
// A set stores unique elements where they:

// Are sorted automatically in ascending order.
// Are unique, meaning equal or duplicate values are ignored.
// Can be added or removed, but the value of an existing element cannot be changed.
// Cannot be accessed by index numbers, because the order is based on sorting and not indexing.

// Create a Set
// To create a set, use the set keyword, and specify the type of values it should store 
// within angle brackets <> and then the name of the set, like: set<type> setName.

#include <iostream>
#include <set>
using namespace std;

int main(){
    // create a set
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // access all element 
    for(string car : cars){
        cout << car << endl;
    }
    // this element in set is assending
    // BMW
    // Ford
    // Mazda
    // Volvo

    set<int> numbers = {1, 2, 5, 3, 9, 4, 4};

    for(int num : numbers){
        cout << num << " ";
    }
    // output is an assending order and duplicate value are ignored: 1 2 3 4 5 9

    // Sort elements in a set in descending order
    set<int, greater<int>> newNumbers = {1, 2, 5, 3, 9, 4, 4};

    for(int num : newNumbers){
        cout << num << " ";
    }
    // output in descending order: 9 5 4 3 2 1
}

// Sort a Set in Descending Order
// By default, the elements in a set are sorted in ascending order. If you want to 
// reverse the order, you can use the greater<type> functor inside the angle brackets,
//  like this:

// Note: The type specified in greater<type> must match the type of elements in the set (int in our example).