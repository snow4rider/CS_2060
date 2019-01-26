// By Matthew Mckenney
// CS_2060.022

/* all functions in math return double
 * sqrt() - square root
 * C requies that you declare a function before using it - this is what proto types are for
 * local static varibles return their values between function calls. (only 1)
 */

#include <stdio.h>

float my_power(float value, int power);

int main(){
	int pow = 3;
	float val = 2;
	float ans = 0;
	
	// Welcome 
	printf("Welcome to my power program\n\n");
	
	// get user input
	printf("please enter a number and the power you want to raise it to.\n-");
	scanf("%f", &val);
	scanf("%d", &pow);
	
	// calculate and print result
	ans = my_power(val, pow);
	printf("%.2f raised to the %d is %.2f\n", val, pow, ans);
	
	return 0;
}


float my_power(float value, int power){
	// raises value to power and returns
	
	float answer = 1;		//  set to one, so it will work 
	for (int i = 1; i <= power ; i++)
		answer = answer * value;
		
	return answer;
}
