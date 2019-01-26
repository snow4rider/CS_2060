//Matthew Mckenney
//CS2060.002
//Assignment 1 convert Fahrenheit To Celsius
//Due – 9/20/2018
//Synopsis: convert Fahrenheit To Celsius

#include <stdio.h>

void convertFahrenheitToCelsius(int *numFah,int *numCels);

int main(){
	int fahrenheitLower = 0;
	int fahrenheitHigher = 0;
	int celsius = 0;

	//welcome to the program and the description
	printf("Welcome to the Fahrenheit to Celsius convertion\nby Matthew McKenney\n");

	//getting user input for start and end point
	printf("Please enter whole numbers for the Fahrenheit degree you would like to start>");
	scanf("%d", &fahrenheitLower);
	printf("Please enter whole numbers for the Fahrenheit degree you would like to stop>");
	scanf("%d",&fahrenheitHigher);

	//send information to the function
	convertFahrenheitToCelsius(&fahrenheitLower, &celsius);
	
	//prints the titles
	printf("%s\t\t%s\n","Fahrenheit","Celsius");
	
	//prints the range of temps		
	for(int index = fahrenheitLower; index < fahrenheitHigher; index = index + 10 ){
		convertFahrenheitToCelsius(&index, &celsius);
		printf("%3d\t\t\t%3d\n",index,celsius);
	}
	

	return 0;
}


//converts fahrenheit degrees to celsius degrees
void convertFahrenheitToCelsius(int *numFah,int *numCels){
	
	//converting fahrenheit to celsius
	*numCels = (*numFah - 32) * (5.0/9.0);
	
}
