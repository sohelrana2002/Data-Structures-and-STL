// A stack stores multiple elements in a specific order, called LIFO.

// LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes,
// where pancakes are both added and removed from the top. So when removing a pancake,
// it will always be the last one you added. This way of organizing elements is called
// LIFO in computer science and programming.

// Unlike vectors, elements in the stack are not accessed by index numbers.
// Since elements are added and removed from the top, you can only access the element
//  at the top of the stack.

// Create a stack of strings called cars
// stack<string> cars;

// You cannot add elements to the stack at the time of declaration, like you can with vectors:

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Create a stack of strings called cars
    stack<string> cars;

    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
}

// The stack will look like this (remember that the last element added is the top element):
// Mazda (top element)
// Ford
// BMW
// Volvo