// comments

#include<stdio.h>

void convertDaysToFortnights(int *numDayspt, float *numFortnightspt);

int main(){
	
	int days = 34;
	float fortnights = 0;
	
	//print welcome and program description
	printf("welcome to my programe\npass by reference example\n\n");
	
	//get number of days
	
	//call day converter and print result
	convertDaysToFortnights(&days, &fortnights);
	
	printf("%d days are %.2f fortnights\n\n", days, fortnights);
	
	return 0;
}


//convert days to fortnight using pass by reference
void convertDaysToFortnights(int *numDayspt, float *numFortnightspt){
	
	*numFortnightspt = *numDayspt/14.0;

}

