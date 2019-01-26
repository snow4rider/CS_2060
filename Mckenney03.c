//Matthew Mckenney
//CS2060.002
//Assignment 3 Stack
//Due – 10/25/2018
//Synopsis: Write a program that implements a stack. \
//The stack will have 5 int slots. \
//It will use pointer arithmetic for everything.\
//create functions to push, pop, and unwind. 

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


int * stack = NULL;

void push(int);
void pop(void);
void unwind(void);
void printStack(void);
int menu(void);

int * top = NULL;
int main(){

	stack = (int * ) malloc(SIZE * sizeof(int));
	top = stack;
	//initialize top
	
	int choice = 0;

	printf("welcome to Matthew's stack\n");
	choice = menu();
	
	return 0;
}


//function to print menu
int menu(void){
	int choice = -1;
	int number;
	
	
	//while loop to run the menu and the three diffrent choices 
	while(choice != 0){
		
		
		//menu for the user and the users choice
		printf("0\texit (unwinds stack and terminates)\n"
				"1\tpush value onto stack\n"
				"2\tpop value off stack\n");
		scanf("%d", &choice);
		
		
		//if choice was 0 it exits the program and run the unwind function
		if(choice == 0){
			
			//print message for exit
			printf("you entered %d, goodbye\n", number);
			
			//clears the stack when exiting the program
			unwind();
		
		//if choice was 1 take in user input and pass it to the push method
		}else if(choice == 1){
			
			//push
			printf("Please enter a whole positive number >");
			scanf("%d", &number);
			push(number);
			printStack();
		
		//if choice was 2 the program pops from the stack
		}else if(choice == 2){
			
			//prints the message and send number to pop
			printf("the top of the stack will be deleted\n");
			pop();
			printStack();
		
		}else{
			printf("You entered %d, please try agian\n", choice);
		}
	}//end of while	
}//end of menu


//function to add an integer to the stack
void push(int num){
	
	//stack not full
	if (top - stack < SIZE){
		*top = num;
		top++;
	}
	else
		//overflow error message
    	printf("error, stack is full\n");
	
}//end of push


//function to remove an integer from the stack
void pop(){
	if(top != stack){
		top--;
	}else{
		printf("the stack is empty\n"); //empty stack error message
	}

}//end of pop


//function to pop the remaining elements
void unwind(){
	top = top - 1;
	while(top >= stack){
		printf("%d -> ", *top);
		top--;
	}
	printf("NULL\n");
	free(stack);
}

void printStack(){
	int * current = top - 1;
	while(current >= stack){
		printf("%d -> ", *current);
		current--;
	}
	printf("NULL\n");
}
