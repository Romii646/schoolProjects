// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <cassert>
#include "circleLink.h"

using namespace std;

//start of functions for class circleLinked

circleLinked::circleLinked(){// default constructor
	head = nullptr;
	newNode = nullptr;
	count = 0;
}

circleLinked::circleLinked(const circleLinked& otherList){// copy constructor
	head = nullptr;
	copyList(otherList);
}

circleLinked::~circleLinked(){ //destructor
   destroyList();
}//end destructor

bool circleLinked::isListEmpty() const{
   return (head == nullptr);	
}

void circleLinked::intializeList(){
	destroyList(); // if list has any nodes itll be all destroyed
}

void circleLinked::destroyList(){
	node *temp; // pointer to dealocate the memory
	
	while (head != nullptr){// while loop to delete each node untill head becomes nullptr
		temp = head; // temp to point to where head points to
		head = head -> nextNode; // statement to move pointer variable head to the next node in the chain
		delete temp; // previous node that head once pointed to is now deleted with pointer variable temp
	}
	newNode = nullptr;
	count = 0;
	cout << "list is empty\n";
}

void circleLinked::print() const{
	int localCount = length() * 2;
	
	node *printPoint = head; // printPoint now point to same place head is pointing to
	
	while(localCount--){// whileloop for circleLinked list to be traversed twice to show data
		cout << printPoint -> data << " ";// is in a circular form
		printPoint = printPoint -> nextNode;                       
}
}

int circleLinked::length() const{
	return count;
}

void circleLinked::copyList(const circleLinked& otherList){
	node *current; // variable to traverse the list
	
	if(head != nullptr){
		destroyList();
	}
	
	if(otherList.head == head){
		head = nullptr;
        newNode = nullptr;
        count = 0;
	}
	else{
		current = otherList.head; // current points to the list to be copied
		
		count = otherList.count; // copy count from other list
		
		head = new node;  // create the node
		
		head -> data = current -> data;
		head -> nextNode = nullptr;
		
		last = head;
		
		current = current -> nextNode;
		
		while (current != nullptr){
			newNode = new node;  //create a node
            newNode -> data = current-> data; //copy the info
            newNode -> nextNode = head;       //set the link of 
                                        //newNode to nullptr
            head -> nextNode = newNode;  //attach newNode after last
            head = newNode;        //make last point to
                                   //the actual last node
            current = current-> nextNode;   //make current point 
                                       //to the next node
		}// end while
	}// end else
}// end of copyList function

bool circleLinked::search(const int& searchItem){
	bool found;
	node *current; // to traverse linked list
	
	current = head;
	
	while(current != nullptr && !found){
		if(current -> data >= searchItem){
			found = true;
		}
		else{
			current = current -> nextNode;
		}
	}
	if(found){
		found = (current -> data == searchItem);
		cout << "found " << searchItem;
	}
	return found;
}// end function search

void circleLinked::insert(const int& newItem){
	node *current; // pointer to traverse list
	node *trailCurrent = nullptr; // pointer to be hind point variable current

    bool  found;
	newNode = new node;// create a new node
	newNode -> data = newItem; // store value from newItem into newNode's data spot in newly made node
	newNode -> nextNode = nullptr; // newNode now points to the node head points to head
	
	if(head == nullptr){
		head = newNode;
		last = newNode;
	}               
	else{
		last -> nextNode = newNode;
		last = newNode;
	
	} 
		
	    current = head;
        found = false;

        while (current != nullptr && !found) //search the list
           if (current->data >= newItem)
               found = true;
           else
           {
               trailCurrent = current;
               current = current->nextNode;
           }
	   if (current == head)      //Case 2
        {
            newNode->nextNode = head;
            head = newNode;
            //count++;
        }
        else                       //Case 3
        {
            trailCurrent->nextNode = newNode;
            newNode->nextNode = current;

            if (current > head){
                last = newNode;
            }

        }
    count++;
    last -> nextNode = head;
}        
void circleLinked::deleteNode(const int& deleteItem){
	node *current; // traverse list
	node *trailCurrent = nullptr;// variable to stay behind current variable
	
	bool found;
	
	if(head == nullptr){
		cout << "Cannot delete from an empty list\n";
	}
	else{
		current = head;
		found = false;
		
		while(current != nullptr && !found){
			if(current -> data >= deleteItem){
				found = true;
			}
			else{
				trailCurrent - current;
				current = current -> nextNode;
			}
		}
		if(current == nullptr ){
			cout << "The item to be deleted is not in the list\n";
		}
		else if(current -> data == deleteItem){// the item to be deleted is in the list
				if(head == current){
					head = head -> nextNode;
					
					if(head == nullptr){
						last = nullptr;
					}
					delete current;
				}
				     else{
                    trailCurrent->nextNode = current->nextNode;

                    if (current == last)
                        last = trailCurrent;

                    delete current;
                }
                count--;
			}
			else{
				cout << "The item to be deleted is not in the list\n";
			}// end 3rd if else stament
		// end 2nd if else statement
	}// end 1st if else statement
}// end of function deleteNode