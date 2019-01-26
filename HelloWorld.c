// matthew mckenney
//CS2060.002
//Hello World
//A first program in C. prints "Hello World"

// Preprocessor - everything it does involes text manipulation (gets the code ready for compiling)
 #include <stdio.h>

int main(){
	
	int age = 0;
	char letter = 'A';
	
	//Print welcome
	printf("\nHello Matthew\n");
	
	//Ask user for age and print special Welcome
	printf("Matthew, what is your age?  ");
	scanf("%d", &age);
	printf("Matthew, greeating. You are %d years old.\n", age);
	
	//ascii
	printf("%c - is the char value\n%d - is it's int value", letter, letter);
	
	return 0;
}
