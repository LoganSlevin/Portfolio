#include <stdio.h>

int main()
{
	float numberOfCents;
	float inchConver;
	float output;
	
	inchConver = 0.393701;
	
	printf("Please enter the amount of inches: ");
	scanf("%f", &numberOfCents);
	
	if (numberOfCents >= 0)
	{	
		output = numberOfCents * inchConver;
		
		printf("%f centimetres is: %f inches", numberOfCents, output);
	}
	
}