// Deque Size
// To find out how many elements a deque has, use the .size() function:

#include <iostream>
#include <deque>
using namespace std;

int main(){
    // create a deque
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // side of deque
    cout << cars.size() <<endl;
    // output: 4

    // for loop through deque
    for (int i = 0; i < cars.size(); i++){
        cout << cars[i] << endl;
    }
    // Volvo
    // BMW
    // Ford
    // Mazda
}