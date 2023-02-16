// =================== Support Code =================
// Doubly Linked List ( DLL ).
//
//
//
// - Implement each of the functions to create a working DLL.
// - Do not change any of the function declarations
//   - (i.e. dll_t* create_dll() should not have additional arguments)
// - You should not have any 'printf' statements in your DLL functions. 
//   - (You may consider using these printf statements to debug,
//     but they should be removed from your final version)
//   - (You may write helper functions to help you debug your code such as print_list etc)
// ==================================================
#ifndef MYDLL_H
#define MYDLL_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


// Create a node data structure to store data within
// our DLL. In our case, we will stores 'integers'
typedef struct node {
	int data;
	struct node* next;
  	struct node* previous;
} node_t;

// Create a DLL data structure
// Our DLL holds a pointer to the first node in our DLL called head,
// and a pointer to the last node in our DLL called tail.
typedef struct DLL {
	int count;		// count keeps track of how many items are in the DLL.
	node_t* head;		// head points to the first node in our DLL.
    node_t * tail;          //tail points to the last node in our DLL.
} dll_t;

// Creates a DLL
// Returns a pointer to a newly created DLL.
// The DLL should be initialized with data on the heap.
// (Think about what the means in terms of memory allocation)
// The DLLs fields should also be initialized to default values.
// Returns NULL if we could not allocate memory.
dll_t* create_dll(){
	// Modify the body of this function as needed.
	dll_t* myDLL= NULL;	
	// TODO: Implement me!!
	// dynamically allocate the memory for doubly linked list.
	myDLL = (dll_t*) malloc(sizeof(dll_t));
	// set the initial count as 0
	myDLL -> count = 0;
	// set the initial head as NULL.
	myDLL -> head = NULL;
	// set the initial tail as NULL.
	myDLL -> tail = NULL;
	// return the doubly linked list.
	return myDLL;
}

// DLL Empty
// Check if the DLL is empty
// Returns -1 if the dll is NULL.
// Returns 1 if true (The DLL is completely empty)
// Returns 0 if false (the DLL has at least one element enqueued)
int dll_empty(dll_t* t){
	// TODO: Implement me!!
	// the condition when the dll is NULL; When no element in dll; When there is at
	// least one element.
	if (t == NULL) {
		return -1;
	} else if (t->count == 0) {
		return 1;
	} else {
		return 0;
	}
}

// push a new item to the front of the DLL ( before the first node in the list).
// Returns -1 if DLL is NULL.
// Returns 1 on success
// Returns 0 on failure ( i.e. we couldn't allocate memory for the new node)
// (i.e. the memory allocation for a new node failed).
int dll_push_front(dll_t* t, int item){
	// TODO: Implement me!!
	// the condition when the dll is null
	if (t == NULL) {
		return -1;
	} 
	// dynamically allocate the memory for node_t.
	node_t *newNode = (node_t*) malloc(sizeof(node_t));
	if (newNode == NULL) {
		return 0;
	}
	// assign newNode value as item
	newNode -> data = item;
	// set the next object as head 
	newNode->next = t -> head;
	// set the previous as NULL
	newNode ->previous = NULL;
	// the condition when head is not NULL, we can assign its previous as newHead.
	if (t->head != NULL) {
		t->head -> previous = newNode;
	} 
	// now we set the head as the newNode
	t->head = newNode;
	if (t -> tail == NULL) {
		// if tail is NULL, we set the tail as newNode as well since the head and tail are same.
		t-> tail = newNode;
	}
	// add the count by 1.
	t ->count++;
	return 1;
}

// push a new item to the end of the DLL (after the last node in the list).
// Returns -1 if DLL is NULL.
// Returns 1 on success
// Returns 0 on failure ( i.e. we couldn't allocate memory for the new node)
// (i.e. the memory allocation for a new node failed).
int dll_push_back(dll_t* t, int item){
	// TODO: Implement me!!
	// the condition when dll is null 
	if (t == NULL) {
		return -1;
	} 
	// now we dynamically allocate the memory of node_t.
	node_t *newNode = (node_t*) malloc(sizeof(node_t));
	if (newNode == NULL) {
		return 0;
	}
	// store item value in newNode.
	newNode-> data = item;
	// after pushing, its previous node is tail.
	newNode->previous = t->tail;
	// after pushing, its next node is NULL.
	newNode->next = NULL;
	// if tail is not null, we can assign its next next element as newNode.
	if (t->tail != NULL) {
		t->tail->next = newNode;
	} 
	// now we should let tail be the newNode. 
	t->tail = newNode;
	// if we find head is NULL, it means we push the newNode as head.
	if (t->head == NULL) {
		t->head = newNode;
	}
	// add count by 1.
	t->count++;
	return -1; 
}

// Returns the first item in the DLL and also removes it from the list.
// Returns -1 if the DLL is NULL. 
// Returns 0 on failure, i.e. there is noting to pop from the list.
// Assume no negative numbers in the list or the number zero.
int dll_pop_front(dll_t* t){
	// TODO: Implement me!!
	if (dll_empty(t) == 1) {
		return 0;
	}  
	if (t == NULL){
	return -1; // Note: This line is a 'filler' so the code compiles.
	}
	node_t *temp = t->head;
	int item = temp->data;
	t->head = temp->next;
	if (t->head != NULL) {
		t->head->previous = NULL;
	}
	if (t->tail == temp) {
		t->tail = NULL;
	}
	free(temp);
	t->count--;
	return item;

}

// Returns the last item in the DLL, and also removes it from the list.
// Returns a -1 if the DLL is NULL. 
// Returns 0 on failure, i.e. there is noting to pop from the list.
// Assume no negative numbers in the list or the number zero.
int dll_pop_back(dll_t* t){
	// TODO: Implement me!!
	// the condition when ddl is empty, we return 0.
	if (dll_empty(t) == 1) {
		return 0;
	}
	// the condition when ddl is NULL, we return -1.
	if (t == NULL) {
		return -1;
	}
	// we set a temporary pointer same to tail.
	node_t *temp = t->tail;
	// also, we store item in temp.
	int item = temp->data;
	// tail is before the temp as we will pop one.
	t->tail = temp->previous;
	// the condition when tail is not null, its next element will be null.
	if (t->tail != NULL) {
		t->tail->next = NULL;
	} 
	// the condition when head is temp, which is tail, now it should be null since 
	// there is only one element in t.
	if (t->head == temp){
		t->head = NULL;
	}
	// free the space.
	free(temp);
	t->count--;
	return item;

	 // Note: This line is a 'filler' so the code compiles.
}

// Inserts a new node before the node at the specified position.
// Returns -1 if the list is NULL
// Returns 1 on success
// Retruns 0 on failure:
//  * we couldn't allocate memory for the new node
//  * we tried to insert at a negative location.
//  * we tried to insert past the size of the list
//   (inserting at the size should be equivalent as calling push_back).
int dll_insert(dll_t* t, int pos, int item){
	// TODO: Implement me!!
	// the condition when ddl is NULL.
	if (t == NULL) {
		return -1;
	} 
	// when the position is beyond the limit range of the ddl.
	if (pos < 0 || pos > t->count) {
		return 0;
	}
	// assign the head to temp.
	node_t *temp = t->head;
	// dynamically allocate the memory for newNode.
	node_t *newNode = (node_t*) malloc(sizeof(node_t));
	// the condition when newNode is NULL
	if (newNode == NULL) {
		return 0;
	}
	// we assign the item value to newNode
	newNode->data = item;
	// if insert in the beginning, we need to consider the head is not null, whose previous node
	// is newNode and next node of newNode is head correspondingly. Also, its previous node is NULL.
	if (pos == 0) {
		if (t->head != NULL) {
			t->head->previous = newNode;
			newNode->next = t->head;
			newNode->previous = NULL;
		}
	// the condition when position is at the end of dll, the next of tail is newNode and its previous 
	// node is tail. since it is in the last position, no more node behind it.
	} else if (pos == t->count) {
		if (t->tail != NULL) {
			t->tail->next = newNode;
			newNode->previous = t->tail;
			newNode->next = NULL;
		}
	} 
	// the position is in between, we let curr same to head. then we go through the loop until 
	// we reach the pos. then the previous node of newNode is curr, and its next is curr.next.
	else {
		node_t *curr = t->head;
		for (int i; i < pos - 1; i++) {
			curr = curr->next;
		}
		newNode->previous= curr;
		newNode->next = curr->next;
		curr->next = newNode;
		curr->next->previous = newNode;
	}
	// add count by 1.
	t->count++;
	
	return 0; 
}

// Returns the item at position pos starting at 0 ( 0 being the first item )
// Returns -1 if the list is NULL
//  (does not remove the item)
// Returns 0 on failure:
//  * we tried to get at a negative location.
//  * we tried to get past the size of the list
// Assume no negative numbers in the list or the number zero.
int dll_get(dll_t* t, int pos){
	// TODO: Implement me!!
	// the condition when t is null, return -1
	if (t== NULL){
		return -1;
	} 
	// the condition when pos is out of range, return 0.
	if (pos < 0 || pos > t->count) {
		return 0;
	}
	// we assign head to curr.
	node_t *curr = t-> head;
	// then we loop through until i reaches pos.
	for (int i = 0; i < pos; i ++) {
		curr = curr->next;
	}
	return curr->data; // Note: This line is a 'filler' so the code compiles.
}

// Removes the item at position pos starting at 0 ( 0 being the first item )
// Returns -1 if the list is NULL
// Returns 0 on failure:
//  * we tried to remove at a negative location.
//  * we tried to remove get past the size of the list
// Assume no negative numbers in the list or the number zero.
int dll_remove(dll_t* t, int pos){
	// TODO: Implement me!!
	// the condition when ddl is NULL.
	if (t == NULL) {
		return -1;
	} 
	// the condition when pos is out of range, return 0.
	if (pos < 0 || pos > t->count) {
		return 0;
	} 
	// we assign head to curr.
	node_t *curr = t->head;
	// the condition when pos is 0, we need to move head to the next pos.
	if (pos == 0) {
		t->head = curr->next;
		// after updating curr to its next, if head is not NULL, its previous node is NULL
		if (t->head != NULL) {
			t->head->previous= NULL;
		}
		// if head and tail are same, we also need to set tail now as NULL
		if (t->tail == curr) {
			t->tail = NULL;
		}
	}
	// if pos is at the tail, we need to let tail be the curr and tail to be in previous pos
	// as it will be deleted. 
	else if (pos == t->count - 1) {
		curr = t->tail;
		t->tail = t->tail->previous;
		// after removing, need to free memory.
		t->tail->next = NULL;
		free(curr);
	} 
	// then we loop through until i reaches pos.
	else {
		for (int i = 0; i < pos; i++) {
			curr = curr->next;
		}
		curr->previous->next= curr->next;
		curr->next->previous= curr->previous;
		free(curr);		
	} 
	// decrease count by 1.
	t->count--;

	return 1; // Note: This line is a 'filler' so the code compiles.
}

// DLL Size
// Returns -1 if the DLL is NULL.
// Queries the current size of a DLL
int dll_size(dll_t* t){
	// TODO: Implement me!!
	// if ddl is NULL, return -1.
	if (t == NULL) {
		return -1;
	}
	// else, we return count as size.
	return t->count; // Note: This line is a 'filler' so the code compiles.
}

// Free DLL
// Removes a DLL and all of its elements from memory.
// This should be called before the proram terminates.
void free_dll(dll_t* t){
	// TODO: Implement me!!
	// if t is null, nothing needs to be freed.
	if (t == NULL) {
		return;
	}
	// else, we assign curr as head.
	node_t *curr = t->head;
	// we loop through until we let the curr to the end. in every loop, we free the temp.
	while (curr != NULL) {
		node_t *temp = curr;
		curr = curr->next;
		free(temp);
	}
	free(t);
}
#endif
