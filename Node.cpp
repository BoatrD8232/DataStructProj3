#include "Node.h"

Node* InsertionSort(Node* oldHead) {
	// newHead stores the pointer to the head of the new sorted list.
	Node* newHead = nullptr;
	Node* nextNode = nullptr;
	// key stores the node that will be added next to the sorted list.
	Node* key = oldHead;

	while (key != nullptr) {
		// nextNode stores the pointer to the item in the unsorted list located after key, 
		// as this pointer would be lost when key is modified below.
		nextNode = key->next;

		// Checks if the new node needs to be added before head or if head is null.
		if (newHead == nullptr || key->data < newHead->data) {
			key->next = newHead;
			newHead = key;
		}
		else {
			Node* currNode = newHead;
			// Loops until the proper position of key is found. key will be added after currNode.
			while (currNode->next != nullptr && currNode->next->data < key->data) {
				currNode = currNode->next;
			}
			key->next = currNode->next;
			currNode->next = key;
		}

		key = nextNode;
	}
	return newHead;
}