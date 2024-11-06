#include "QueueVT.h"

int main()
{
	/*
		Creates a new queue which is created with an empty array of capacity 10.
	*/
	Queue<int> newQ;
	/*
		Adds 10 randomly generated integers.
	*/
	for (int i = 0; i < 10; ++i) {
		int randNum = rand() % 50 + 1;
		newQ.push(randNum);
	}
	newQ.display();
	// Move to rear.
	newQ.move_to_rear();
	newQ.display();
	/*
		Pops the list numItems + 1 times in order to clear the list and 
		shows the error message once when pop is called on an empty list.
	*/
	int end = newQ.size() + 1;
	for (int i = 0; i < end; ++i) {
		newQ.pop();
	}
	// Prints an empty list.
	newQ.display();
}


