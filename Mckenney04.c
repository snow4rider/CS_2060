//Matthew Mckenney
//CS2060.002
//Assignment 4
//Due: Nov 8 2018
//Synopsis: print the menu that tells the user to input a whole number.\
// user inputs a positive whole number.\
// the program creates a new node with the user imputed data\
// the program inserts the new node in natural order\
// the program prints the numbers in order and frees the memory.


#include <stdio.h>
#include <stdlib.h>


struct listNode{
	int data;
	struct listNode *next;
}header = {0, NULL};

//prototype 
void createNode(int wholeNumber);
void insertNode(struct listNode *newNode);
void printList(struct listNode * n);
void freeNode(void);


int main(){
	int wholeNumber = 0;

	//menu and user input
	printf("Welcome to my linked list program!\n");
	printf("Please enter -1 to exit.\nPlease enter a positive non-zero"\
	 "whole number to add to the list\n\n>");
	scanf("%d", &wholeNumber);
	createNode(wholeNumber);
	
	//while loop to 
	while(wholeNumber > 0){

		printf("Please enter 0 to exit and enter a positive whole number\
		 to add to the list\n\n>");
		scanf("%d", &wholeNumber);
		createNode(wholeNumber);
	}
	
	//prints list starting at header
	printList(header.next);

	return 0;
}


//create new node
void createNode(int wholeNumber){
	
	//create a new struct
	struct listNode* newNode = NULL;

	//initialize a new struct node
	newNode = (struct listNode*)malloc(sizeof(struct listNode));
	
	//fill data with user imput and next to null
	newNode->data = wholeNumber;
	newNode->next = NULL;
	
	
	//send newly created node to insert it
	insertNode(newNode);
}


//add node to linked list
void insertNode(struct listNode* newNode){
	
	//create pointer called current
	struct listNode *current = NULL;
	struct listNode *previous = NULL;
	

	//initialize current to header
	previous = &header;
	current = header.next;
	
	
	//while loop to walk though the linked list and add to the list in order
	while(current != NULL && current->data < newNode->data){
		previous = current;
		current = current->next;
	}
	newNode->next = current;
	previous->next = newNode;
}//insertNode


// This function prints contents of linked list starting from the given node 
void printList(struct listNode *n) { 

	//while loop to print list
	while (n != NULL) { 
		printf(" %d ", n->data); 
		n = n->next; 
	} 
}//print linkedList


//add node to linked list
void freeNode(){
	
	//create pointer called current
	struct listNode *current = NULL;
	struct listNode *previous = NULL;
	

	//initialize current to header
	previous = &header;
	current = header.next;
	
	
	//while loop to walk though the linked list
	while(current != NULL){
		previous = current;
		current = current->next;
		free(previous);
	}
}//freeNode
