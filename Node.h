#include <iostream>
using namespace std;
#pragma once


/*
    Stuct node creates a node of a singly linked list.
    int data: Stores the data of the node.
    Node* next: Contains a pointer to the next node. Initialized to nullptr.
*/
struct Node {
    int data;
    Node* next;
    Node(const int data_item, Node* next_ptr = nullptr) :data(data_item), next(next_ptr) {}
};

/*
    InsertionSort- Sorts a singly linked list of nodes using an insertion sort method.
    param oldHead- The pointer to the head of the original unsorted list.
    return- The pointer to the head of the new sorted list.
*/
Node* InsertionSort(Node* oldHead);
