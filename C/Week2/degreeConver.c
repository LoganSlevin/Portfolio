#include <stdio.h>

int main()
{
	float celc;
	float faren;
	
	printf("Please enter the 'C: ");
	scanf("%f", &celc);
	
	faren = (1.8 * celc) + 32;
	
	
	
	printf("your conversion is: %f", faren);
}