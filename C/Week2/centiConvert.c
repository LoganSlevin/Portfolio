#include <stdio.h>

int main()
{
	float numberOfInches;
	float centConver;
	float output;
	
	centConver = 2.54;
	
	printf("Please enter the amount of inches: ");
	scanf("%f", &numberOfInches);
	
	output = numberOfInches * centConver;
	
	printf("%f inches is: %f centimetres", numberOfInches, output);
}