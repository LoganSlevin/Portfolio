#include <stdio.h>

int main()
{
	int quantity;
	int totalBill;
	
	float priceQuantity;
	float discount;
	
	
	
	printf("please enter the quantity for this item: ");
	scanf("%d", &quantity);
	
	if (quantity <= 0)
	{
		printf("So you don't want to make a purchase?\n");
		printf("Enter a valid quantity!");
	}
	else if (quantity < 5)
	{
		totalBill = quantity * 99;
		
		printf("No discount applied.\n");
		printf("Your bill comes to: %d pounds", totalBill);
	}
	else if (quantity < 9)
	{
		priceQuantity = quantity * 99;
		
		discount = priceQuantity * 0.1;
		
		totalBill = priceQuantity - discount;
		
		printf("10%% discount applied.\n");
		printf("Your bill comes to: %d pounds", totalBill);
	}
	else if (quantity < 19)
	{
		priceQuantity = quantity * 99;
		
		discount = priceQuantity * 0.2;
		
		totalBill = priceQuantity - discount;
		
		printf("20%% discount applied.\n");
		printf("Your bill comes to: %d pounds", totalBill);
	}
	else if (quantity < 49)
	{
		priceQuantity = quantity * 99;
		
		discount = priceQuantity * 0.3;
		
		totalBill = priceQuantity - discount;
		
		printf("30%% discount applied.\n");
		printf("Your bill comes to: %d pounds", totalBill);
	}
	else if (quantity < 99)
	{
		priceQuantity = quantity * 99;
		
		discount = priceQuantity * 0.4;
		
		totalBill = priceQuantity - discount;
		
		printf("40%% discount applied.\n");
		printf("Your bill comes to: %d pounds", totalBill);
	}
	else
	{
		priceQuantity = quantity * 99;
		
		discount = priceQuantity * 0.5;
		
		totalBill = priceQuantity - discount;
		
		printf("50%% discount applied.\n");
		printf("Your bill comes to: %d pounds", totalBill);
	}
}