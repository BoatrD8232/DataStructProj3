#include "QueueVT.h"

template <typename Item_Type> void Queue<Item_Type>::push(int num) {
	if (numItems == capacity) { 
		resize(); 
	}
	
	numItems++; 
	rearIn = (rearIn + 1) % capacity; 
	data[rearIn] = num;
}

template <typename Item_Type> void Queue<Item_Type>::pop() {
	if (numItems == 0) {
		cout << "Queue is empty, cannot remove" << endl;
		return;
	}

	numItems--;
	frontIn = (frontIn + 1) % capacity;
}

template <typename Item_Type> int Queue<Item_Type>::front() {
	return data[frontIn];
}

template <typename Item_Type> int Queue<Item_Type>::size() {
	return numItems;
}

template <typename Item_Type> bool Queue<Item_Type>::empty() {
	if (numItems == 0) {
		return true;
	}
	return false;
}

template <typename Item_Type> void Queue<Item_Type>::display() {
	cout << "Displaying Queue Contents:" << endl;
	for (int i = 0; i < numItems; ++i) {
		cout << setw(2) << left << i + 1  <<  ": " << right << setw(2) << front() << endl;
		push(front());
		pop();
	}
	cout << endl;
}

template <typename Item_Type> void Queue<Item_Type>::resize() {
	const int newCap = capacity * 2;
	// tempArr is used stores the old array for use in swapping and deletion.
	int* tempArr;
	int* newData = new int[newCap];
	// Copies the data form the old array to the new array.
	for (int i = 0; i < numItems; i++) {
		newData[i] = data[(frontIn + i) % capacity];
	}
	frontIn = 0;
	rearIn = numItems - 1;
	capacity = newCap;
	// Swaps the old and new Arrays. Deallocated the old array.
	tempArr = data;
	data = newData;
	delete[] tempArr;
	newData = nullptr;
}

template <typename Item_Type> void Queue<Item_Type>::move_to_rear() {
	push(front());
	pop();
}

// Declares the template type. Change the variable type within the <> to whatever type is desired.
// This is necessary to avoid unresolved external errors.
// The main function only has examples for int types.
template class Queue<int>;
