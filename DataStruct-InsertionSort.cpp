#include "Node.h"

int main()
{
    // Creates a list with values 1-6 in descending order, sorts, prints.
    Node* head = new Node(6);
    Node* currNode = head;
    for (int i = 5; i >= 1; --i) {
        currNode->next = new Node(i);
        currNode = currNode->next;
    }
    cout << "The original, unsorted list: " << endl;
    currNode = head;
    while (currNode != nullptr) {
        cout << currNode->data << endl;
        currNode = currNode->next;
    }
    head = InsertionSort(head);
    cout << "\nThe new sorted list: " << endl;
    currNode = head;
    while (currNode != nullptr) {
        cout << currNode->data << endl;
        currNode = currNode->next;
    }

    // Creates a list with zero as an element, then adds 5 randomly generated numbers between -10 and 10. Sorts then prints.
    Node* head2 = new Node(0);
    currNode = head2;
    for (int i = 5; i >= 1; --i) {
        currNode->next = new Node((rand() % 21 - 10));
        currNode = currNode->next;
    }
    cout << "\nThe original, unsorted list: " << endl;
    currNode = head2;
    while (currNode != nullptr) {
        cout << currNode->data << endl;
        currNode = currNode->next;
    }
    head2 = InsertionSort(head2);
    cout << "\nThe new sorted list: " << endl;
    currNode = head2;
    while (currNode != nullptr) {
        cout << currNode->data << endl;
        currNode = currNode->next;
    }
}


