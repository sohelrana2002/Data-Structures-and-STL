// Loop Through a Vector
// You can loop through the vector elements by using a for loop combined with the .size() function:

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // loop
    for (int i = 0; i < cars.size(); i++)
    {
        cout << cars[i] << endl;
    }

    // for each loop
    for (string car : cars)
    {
        cout << car << endl;
    }
}

// You can also use a for-each loop (introduced in C++ version 11 (2011),
// which is cleaner and more readable:
// Tip: It is also possible to loop through vectors with an iterator,
//  which you will learn more about in a later chapter.