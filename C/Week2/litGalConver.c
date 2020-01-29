#include <stdio.h>

int main()
{
	float milesDriven;
	float litresUsed;
	float litGalConver;
	float mpg;
	
	printf("Please enter the amount of miles driven: ");
	scanf("%f", &milesDriven);
	
	printf("Please enter the amount of litres used: ");
	scanf("%f", &litresUsed);
	
	litGalConver = litresUsed * 0.219969;
	
	mpg = milesDriven / litGalConver;
	
	printf("Your miles per gallon is: %f", mpg);
}