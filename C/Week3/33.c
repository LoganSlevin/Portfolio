#include <stdio.h>

int main()
{
	int userChoice;
	float firstInput;
	float output;
	float centConver;
	float inchConver;
	
	printf("Please enter 1 to convert to centimetres, or 2 to convert to inches: ");
	scanf("%d", &userChoice);
	
	if (userChoice == 1)
	{
		centConver = 2.54;
	
		printf("Please enter the amount of inches: ");
		scanf("%f", &firstInput);
	
		output = firstInput * centConver;
	
		printf("%f inches is: %f centimetres", firstInput, output);	
	}
	else if (userChoice == 2)
	{
		inchConver = 0.393701;
	
		printf("Please enter the amount of centimetres: ");
		scanf("%f", &firstInput);
	
		output = firstInput * inchConver;
		
		printf("%f centimetres is: %f inches", firstInput, output);
	}
	else
	{
		printf("%d is invalid, try again", userChoice);
	}	
}