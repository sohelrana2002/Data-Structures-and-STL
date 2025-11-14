// Add Elements
// To add elements to a set, you can use the .insert() function:

#include <iostream>
#include <set>
using namespace std;

int main(){
    // create a set
    set<string> cars = {"Volvo", "BMW", "Ford"};

    // add new element
    cars.insert("Mazda");
    cars.insert("Tesla");

    for(string car : cars){
        cout << car << ", ";
    }
    // output: BMW, Ford, Mazda, Tesla, Volvo, 
}