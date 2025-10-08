// Data Structures
// Data structures are used to store and organize data. An array is an example of a data structure, which allows multiple elements to be stored in a single variable.

// C++ includes many other data structures as well, each is used to handle data in different ways.

// These are part of the C++ STL, which stands for The Standard Template Library.

// C++ STL
// STL is a library that consist of different data structures and algorithms to effectively store and manipulate data.

// If we say that data structures store data, we can say that algorithms are used to solve different problems, often by searching through and manipulating those data structures.

// Using the right data structure and algorithm makes your program run faster, especially when working with lots of data.

// example
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create a vector called cars that will store strings
    vector<string> cars = {"VOLVO", "BMW", "FORD", "MAZDA"};

    // print vector elements
    for (string car : cars)
    {
        cout << car << endl;
    }
}

// output
// VOLVO
// BMW
// FORD
// MAZDA