//Matthew Mckenney
//CS2060.002
//Assignment 2 Simple Calculator
//Due – 08/04/2018
//Synopsis: make a calculator that only takes in two opterands and \
//has only one if statement to implement pointer arithmatic to go to the different functions

#include <stdio.h>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);


int main(){
	
	double x = 0, y = 0;
	double(* mathPt[4])(double, double) = {add, subtract, multiply, divide};
	int choice = -1;
	double returned;
	
	//welcome print statement
	printf("Welcome to my simple calculator\n");
	
	//print statment to get user input 
	printf("Please enter two values >");
	scanf("%lf", &x);
	scanf("%lf", &y);
	
	
	//do while loop to run the menu for the program
	do{
		
		//print the menu for the user, describing what they do
		printf(" 0 \t exit \n 1 \t add \n 2 \t subtract \n 3 \t multiply \n 4 \t divide \n");
		scanf("%d", &choice);
		
		//if else statement to check the user input 
		if(choice > 0 && choice < 5)
		{
			returned = (*mathPt[choice-1])(x, y);
		}
		else
		{
			printf("You entered %d value out side of 0-4 please try agian.\n", choice);
		}
		
		//print the anwser statment 
		printf("the answer is %.2lf\n", returned);
		
	}	while (choice != 0);

	return 0;
}




//function that returns two numbers added
double add(double x, double y){
	double answer = 0;
	
	answer = (x+y);
	
	return answer;
}

//function that returns two numbers subtracted
double subtract(double x, double y){
	double answer = 0;
	
	answer = (x - y);
	
	return answer;
}

//function that returns two numbers multiplyed 
double multiply(double x, double y){
	double answer = 0;
	
	answer = (x * y);

	return answer;
}

//function that returns two numbers divided
double divide(double x, double y){
	double answer = 0;
	
	//if statement to check for divition by zero
	if (y != 0){
		answer = (x / y);
	}else{
		answer = (0);
	}	

	return answer;
}
