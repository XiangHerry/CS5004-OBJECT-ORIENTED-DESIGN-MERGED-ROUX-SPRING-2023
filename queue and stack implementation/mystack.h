// =================== Support Code =================
// Stack
// - Implement each of the functions to create a working stack.
// - Do not change any of the function declarations
//   - (i.e. stack_t* create_stack() should not have additional arguments)
// - You should not have any 'printf' statements in your stack functions. 
//   - (You may consider using these printf statements to debug, 
//      but they should be removed from your final version)
// ==================================================
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef MYSTACK_H
#define MYSTACK_H


// Stores the maximum 'depth' of our stack.
// Our implementation enforces a maximum depth of our stack.
// (i.e. capacity cannot exceed MAX_DEPTH for any stack)
# define MAX_DEPTH 32

// Create a node data structure to store data within
// our stack. In our case, we will stores 'integers'
typedef struct node{
	int data;
	struct node* next;
}node_t;

// Create a stack data structure
// Our stack holds a single pointer to a node, which
// is a linked list of nodes.
typedef struct stack{
	int count;		// count keeps track of how many items
				// are in the stack.
	unsigned int capacity;	// Stores the maximum size of our stack
	node_t* head;		// head points to a node on the top of our stack.
}t_stack_t;

// Creates a stack
// Returns a pointer to a newly created stack.
// The stack should be initialized with data on the heap.
// (Think about what the means in terms of memory allocation)
// The stacks fields should also be initialized to default values.
t_stack_t* create_stack(unsigned int capacity){
	// Modify the body of this function as needed.
	t_stack_t* myStack = NULL;	
	// TODO: Implement me!!
	// we dynamically allocate the memory for stack.
    myStack = (t_stack_t*)malloc(sizeof(t_stack_t));
	// setter.
    myStack->capacity = capacity;
    myStack->count = 0;
    myStack->head = NULL;
	

	return myStack;
}

// Stack Empty
// Check if the stack is empty
// Returns 1 if true (The stack is completely empty)
// Returns 0 if false (the stack has at least one element enqueued)
int stack_empty(t_stack_t* s){
	// TODO: Implement me!!
	// if count as 0, then it is empty.
	if (s->count == 0) {
		return 1;
	} else {
		return 0;
	}
}

// Stack Full
// Check if the stack is full
// Returns 1 if true (The Stack is completely full, i.e. equal to capacity)
// Returns 0 if false (the Stack has more space available to enqueue items)
int stack_full(t_stack_t* s) {
	// TODO: Implement me!
	// if count reaches the capacity, then it is full.
	if (s->count == s->capacity) {
		return 1;
	} else {
		return 0;
	}
}

// Enqueue a new item
// i.e. push a new item into our data structure
// Returns a -1 if the operation fails (otherwise returns 0 on success).
// (i.e. if the Stack is full that is an error, but does not crash the program).
int stack_enqueue(t_stack_t* s, int item){
	// TODO: Implement me!
	// if full, we cannot enqueue anything.
	if (stack_full(s) == 1) {
		return -1;
	} 
	// else, we first dynamically allocate memory for newNode.
	// store item to newNode and it is next to head. then, the new head is newNode now and add count by 1.
	else {
		node_t* newNode = (node_t*)malloc(sizeof(node_t));
		newNode->data = item;
		newNode->next = s->head;
		s->head = newNode;
		s->count++;
		return 0; 
	}
}

// Dequeue an item
// Returns the item at the front of the stack and
// removes an item from the stack.
// Removing from an empty stack should crash the program, call exit(1).
int stack_dequeue(t_stack_t* s){
	// TODO: Implement me!
	// if empty, we cannot dequeue.
	if (stack_empty(s) == 1) {
		printf("Error detected! Trying to remove element from an empty stack!\n");
		exit(1);
	} 
	// else, we store the data of head. and then we pop from the front.
	// free the memory and decrease the count by 1.
	else {
		int front_item = s->head->data;
		node_t* temp = s->head;
		s->head = s->head->next;
		free(temp);
		s->count--;
		return front_item;
	}
	return 9999999; // Note: This line is a 'filler' so the code compiles.
}

// Stack Size
// Queries the current size of a stack
// A stack that has not been previously created will crash the program.
// (i.e. A NULL stack cannot return the size)
unsigned int stack_size(t_stack_t* s){
	// TODO: Implement me!
	// if stack is NULL, we can return 0.
	if (s == NULL) {
		printf("Error detected! The stack is null!\n");
		return 0;
	} 
	// else, return count as size.	
	else {
		return s->count;
	}
}

// Free stack
// Removes a stack and ALL of its elements from memory.
// This should be called before the proram terminates.
void free_stack(t_stack_t* s){
	// TODO: Implement me!
	// if stack is NULL, nothing to free.
	if (s == NULL) {
		printf("Error detected! stack is NULL!\n");
		return;
	} 
	// set head to curr and loop through until the curr reaches the end, and free every node in between.
	else {
		node_t *current = s->head;
		while (current != NULL) {
			node_t *temp = current;
			current = current->next;
			free(temp);
		}
		
		free(s);
	}
}

#endif
