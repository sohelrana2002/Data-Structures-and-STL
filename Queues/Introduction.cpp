// A queue stores multiple elements in a specific order, called FIFO.

// FIFO stands for First in, First Out. To visualize FIFO, think of a queue as
// people standing in line in a supermarket. The first person to stand in line is a
// lso the first who can pay and leave the supermarket. This way of organizing elements
// is called FIFO in computer science and programming.

// Unlike vectors, elements in the queue are not accessed by index numbers.
// Since queue elements are added at the end and removed from the front,
// you can only access an element at the front or the back

// create a queue
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // create a queue
    queue<string> cars;

    // add element in queue
    cars.push("Volve");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
}