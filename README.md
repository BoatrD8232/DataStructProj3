# DataStructProj3
Question one is implemented in DataStructQueueTemplate.cpp, QueueVT.cpp and QueueVT.h. DataStructQueueTemplate.cpp only contains an example of how to use QueueVT.cpp and QueueVT.h, it has no necessary code.
The queue is implemented as a template, but the final line of QueueVT.cpp must be modified in order to avoid unresolved external errors. The file as it is included is set up for the int data type, but modifying the code as instructed in QueueVT.cpp allows for any data type to be used.
The examples in DataStructQueueTemplate.cpp will only work for a queue of type int. The contents of a queue may be printed using the display function.

Example Execution:
The below screenshot shows a queue being filled with 21 elements and displayed. The pop function is then called 22 times in order to clear the list and show the error message when pop is called on an empty list. The empty list is then displayed.

![Q1](https://github.com/user-attachments/assets/2ee66ec1-9e08-44dd-a30b-dc0e71cfa157)


Question 2 is implemented in DataStruct-RecLinSearch.cpp, Search.cpp and Search.h. DataStruct-RecLinSearch.cpp contains an example of the usage of Search.cpp and Search.h. Including Search.h allows the use of linear_search using a vector of int type.

Example Execution:

![Q2](https://github.com/user-attachments/assets/26df4bfe-17f8-45c7-98b8-08497bea4458)


Question 3 is implemented in DataStruct-InsertionSort.cpp, Node.cpp and Node.h. DataStruct-InsertionSort.cpp contains examples of the implementation of Node.h and Node.cpp. Node.cpp and Node.h implement the singly linked list and contain a insertionSort function that sorts a given linked list. A node pointer that points to the head of a list will be passed to the insertionSort function and that function will return a pointer to the head of a new sorted list.

Example Execution-
A list of numbers in descending order is sorted.

![Q3Pt1](https://github.com/user-attachments/assets/25b11c7a-deda-4bb9-adcb-73ed584404bb)

A list of random numbers in no particular order is sorted.

![Q3Pt2](https://github.com/user-attachments/assets/f6648a65-b77c-451e-8a12-33bd9d32e5d9)


