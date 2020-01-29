#include <stdio.h>

int main()
{
	int childI;
	int adultI;
	int seniorI;
	int childP;
	int adultP;
	int seniorP;
	int co;
	int ao;
	int so;
	int price;
	
	childP = 5;
	adultP = 10;
	seniorP = 8;
	
	printf("Please enter the amount of childrens tickets: ");
	scanf("%d", &childI);
	
	printf("Please enter the amount of adult tickets: ");
	scanf("%d", &adultI);
	
	printf("Please enter the amount of senior tickets: ");
	scanf("%d", &seniorI);
	
	co = childI * childP;
	ao = adultI * adultP;
	so = seniorI * seniorP;
	
	price = co + ao + so;
	
	printf("Your bill comes to: %d", price);
}