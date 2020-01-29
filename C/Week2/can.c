#include <stdio.h>

int main()
{
	float lengthM;
	float widthM;
	float squareM;
	float canAmount;
	
	printf("Please enter the lenth of the wall in (M): ");
	scanf("%f", &lengthM);
	
	printf("Please enter the width of the wall in (M): ");
	scanf("%f", &widthM);
	
	squareM = lengthM * widthM;
	
	canAmount = squareM / 100;
	
	printf("You will need: %f cans of paint to cover the wall.", canAmount);
}