#ifndef PROJECT_CIRLINK_H
#define PROJECT_CIRLINK_H
#include <iostream>
#include <cassert>

using namespace std;

struct node {
	int data;
	node *nextNode;
};

class circleLinked {
// protect variables
	public:
	   node *head, *newNode, *last;
	   int count = 0;
	   
	circleLinked(); // default constructor
	circleLinked(const circleLinked& otherList); //copy constructor
	~circleLinked(); // deconstructor
	   
	void intializeList(); // intialize list to an empty state
	// postcondtion: head will equal nullptr, temp, and newNode
	// count will equal zero
	
	bool isListEmpty() const;
	// function to see if the list is empty.
	// postcondtion: Returns true if the list is empty, other wise it returns false
	
	void destroyList();
	// function to destroy all nodes from the list
	// postcondtion: head = nullptr, temp = nullptr, newNode = nullptr
	
	void print() const;
	// function to print the contents of the list
	// no postoncdtion
	
	int length() const;
	// function to find the length of a list
	// postconditoin: count value is returned
	
	bool search(const int& searchItem);
	// function to find a item in the list
	//postcondtion: returns true if item is in the list
	// otherwise false

	
	void insert(const int& newItem);
	// function to insert newItem in thelist
	// postcondtion: first points to the new list, newItem is inserted at the proper place
	// in the list, count incremented by 1.
	
	void deleteNode(const int& deleteItem);
	// function to delete an item from the list
	//postcondtion: If found, node containing data is deleted from the list
	//count decremented by 1.
	
	void copyList(const circleLinked& otherList);
	//function to make a copy of the other list
	// postcondtion: A copy of the otherList is created and assigned to this list.
};

#endif