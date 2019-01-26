//Matthew Mckenney
//CS2060.002
//Assignment 5
//Due: Nov 20 2018
//Synopsis: print welcome message\
// set an array of pointer char other wise called an array of strings\
// print the list, order the list and print it agian. 


#include<stdio.h>


//proto type of functions
void print(char *name[]);
void sort(char *name[]);

int main(){
	
	
	//print the welcome message
	printf("welcome to Assignment 5\nBy Matthew McKenney\n");
	
	
	//list of names
	char *name[] = { "bob", "zack", "matt", "frank", "john"};
	
	
	//print the unsorted list
	print(&name[0]);
	printf("\n------------------------------------------\n");


	//order the list
	sort(&name[0]);
	
	
	//print the sorted list
	print(&name[0]);

	
	// signal to operating system program ran fine 
	return 0;
}


//prints the list
void print(char *name[]){
	char **Ptr = NULL;
	
	
	//for loop to print the list of names
	for(Ptr = &name[0]; Ptr <= &name[4]; Ptr++){
		printf("name is %s\n", *Ptr );
	}
} 


//sort the array
void sort(char *name[]){
	int i = NULL, j = NULL;
 	
	
	//sort the array with a bubble sort
	//outer for loop
	for(i = 0; i < 4; i++){
		
		
		//inner for loop
		for(j = 0; j < 4; j++){
			
			
			//if statment to compare the first letter
			if(*name[j]>*name[j+1]){
				
				
				//swap values
				char *temp = name[j];
				name[j] = name[j+1];
				name[j+1] = temp;
			}
		}
	} 
	
} 
