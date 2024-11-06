#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
//template <typename Item_Type>
#pragma once

template <typename Item_Type> class Queue {
private:
	/*
		The array representing the queue, the number of items in the queue and the capacity of the array.
	*/
	Item_Type* data = new Item_Type[10];
	int numItems = 0;
	int capacity = 10;
	/*
		The front and rear indices of the circular array.
	*/
	int frontIn = 0;
	int rearIn = 0;
public:

	/*
		push- adds a new value to the end of the list. Calls resize if the capacity is insufficient.
		int num- the value to be added.
	*/
	void push(int num);
	/*
		pop- removes a value from the beginning of the list.
	*/
	void pop();
	/*
		front- Gets the value at the front of the queue;
		returns- The value of the front item in the queue;
	*/
	int front();
	/*
		size- Gets the number of data items in the queue.
		returns- The value of variable numItems;
	*/
	int size();
	/*
		empty- Checks if the queue is empty.
		return- True if the list is empty, False if otherwise.
	*/
	bool empty();
	/*
		display- Lists the queue in order.
	*/
	void display();
	/*
		resize- Doubles the size of the data array when the capacity needs to be increased.
	*/
	void resize();
	/*
		move_to_rear- Adds the first item of the queue to the rear and pops the first item.
	*/
	void move_to_rear();
};
