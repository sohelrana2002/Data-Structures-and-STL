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

// Key Concepts of the STL
// The key components of the STL consist of containers, iterators, and algorithms, and the relationship between them:

// Containers are data structures that provides a way to store data, like vectors, lists, etc.
// Iterators are objects used to access elements of a data structure.
// Algorithms include functions, like sort() and find(), that perform operations on data structures through iterators.
// In Computer Science, data structures and algorithms go hand in hand. A data structure is not
//  worth much if you cannot search through it or manipulate it efficiently using algorithms,
//  and algorithms are not worth much without a data structure to work on