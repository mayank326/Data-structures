/*
* DLinkedList.h
* Doubly Linked List functions
*/

#ifndef __Doubly_Linked_List__DLinkedList__
#define __Doubly_Linked_List__DLinkedList__

#include <stdio.h>

// Stores the number of nodes in the list
extern int list_size;

// Structure representing a node in the Doubly Linked Lists
struct DLLNode {
	int data;
	struct DLLNode *next;
	struct DLLNode *prev;
};

/*
* Function : isOutOfBounds(position to check bounds on)
*/
int isOutOfBounds(int position);


/*
* Prints the data inside node in the following format, say if the data in 
* the node is 5 so = | 5 | will be printed
*/
void printNodeData(struct DLLNode *node);


/*
* Prints all the contents of the list one by one starting from the head.
*/
void printList(struct DLLNode *head);


/*
* Returns a new node of type DLLNode with data equal to what is passed in as parameter.
*/
struct DLLNode * getNewNode(int data);


/*
* Retruns node present at the passed in position in the list, in the list 
* the counting of node starts from 0 and not from 1, so take care of that,
* Returns NULL if the passed in position is out of bounds
*/
struct DLLNode *getNodeAt(struct DLLNode *head, int position);


/*
* Function : isTailNode(pointer to a node in the list
* Checks if the passed in node is the tail node of the list 
* if it is returns 1 (true) 0 (false) otherwise.
*/
int isTailNode(struct DLLNode *node);


/*
* Checks if the passed in node is the head node of the list
* if it returns 1 (true) 0 (false) otherwise.
*/
int isHeadNode(struct DLLNode *head);


//Other operations over Doubly linked list
void insertAt(struct DLLNode **head, int data, int position);

void insertInBeginning(struct DLLNode **head, int data);

void insertAtEnd(struct DLLNode **head, int data);

void insert(struct DLLNode **head, int data);

void deleteAt(struct DLLNode **head, int position);

void deleteInBeginning(struct DLLNode ** head);

void deleteAtEnd(struct DLLNode **head);

void delete(struct DLLNode **head);

#endif /* defined(__Doubly_Linked_List__DLinkedList__) */

