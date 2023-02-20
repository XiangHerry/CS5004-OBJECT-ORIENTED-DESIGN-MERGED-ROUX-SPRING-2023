// Modify this file
// compile with: gcc linkedlist.c -o linkedlist
// TODO: Chenyi XIANG
// TODO: 01/24
// Lab02 CS5008 Spring 2023

#include <stdio.h>
#include <stdlib.h> // contains the functions free/malloc

// TODO: Create your node_t type here
typedef struct node_t {
	int year;
	int wins;
	struct node_t *next;
} node_t;

// TODO: Write your functions here
// There should be 1.) create_list 2.) print_list 3.) free_list
// You may create as many helper functions as you like.

node_t *create_list(int year, int wins) {
	node_t *head = NULL;
	node_t *current = NULL;
	// Allocating memory for the first node
	head = (node_t*) malloc(sizeof(node_t));
	head->year = year;
	head->wins = wins;
	head->next = NULL;
	current = head;	
	
// Allocating memory for the remaining nodes and populating with data
	current -> next = (node_t*) malloc(sizeof(node_t));
	current = current -> next;
	current->year = 2017;
	current->wins = 93;
	current->next = (node_t*) malloc(sizeof(node_t));
	current = current->next;
	current->year = 2016;
	current->wins = 93;
	current->next = (node_t*) malloc(sizeof(node_t));
	current = current->next;
	current->year = 2015;
	current->wins = 78;
	current->next = (node_t*) malloc(sizeof(node_t));
	current = current->next;
	current->year = 2014;
	current->wins = 71;
	current -> next = NULL;
	return head;
}

void print_list(node_t* head) {
	node_t* current = head;
	while (current != NULL) {
		printf("%d, %d wins\n", current->year, current -> wins);
		current = current->next;
	}
	
}

void free_list(node_t* head) {
	node_t* curr = head;
	while (curr != NULL) {
		node_t* next = curr -> next;
		free(curr);
		curr = next;
	}
}

int main(){
	// TODO: Implement me!  
	node_t* head = create_list(2018, 108);
	

    //populating the linked list with the win data
	print_list(head);
	free_list(head);
	return 0;

}
