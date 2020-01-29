#include <stdio.h>

int main()
{
	float milesDriven;
	float gallonsUsed;
	float mpg;
	
	printf("Please enter the amount of miles driven: ");
	scanf("%f", &milesDriven);
	
	printf("Please enter the amount of gallons used: ");
	scanf("%f", &gallonsUsed);
	
	mpg = milesDriven / gallonsUsed;
	
	printf("Your miles per gallon is: %f", mpg);
}