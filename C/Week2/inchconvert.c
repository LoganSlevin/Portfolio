#include <stdio.h>

int main()
{
	float numberOfCents;
	float inchConver;
	float output;
	
	inchConver = 0.393701;
	
	printf("Please enter the amount of centimetres: ");
	scanf("%f", &numberOfCents);
	
	output = numberOfCents * inchConver;
	
	printf("%f centimetres is: %f inches", numberOfCents, output);
}