#include "QueueVT.h"

int main()
{
	/*
		Creates a new queue which is created with an empty array of capacity 10.
	*/
	Queue<int> newQ;
	/*
		Adds 21 randomly generated integers. Adds 21 so the array is resized twice.
	*/
	for (int i = 0; i < 21; ++i) {
		int randNum = rand() % 50 + 1;
		newQ.push(randNum);
	}
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


