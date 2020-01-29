#include <stdio.h>

int main()
{
	int marks;
	
	printf("Please enter the marks: ");
	scanf("%d", &marks);
	
	if (marks < 0 || marks > 100)
	{
		printf("%d%% is Impossible!", marks);
	}
	else if (marks < 35)
	{
		printf("%d%% is a grade F", marks);
	}
	else if (marks < 39)
	{
		printf("%d%% is a grade E", marks);
	}
	else if (marks < 49)
	{
		printf("%d%% is a grade D", marks);
	}
	else if (marks < 59)
	{
		printf("%d%% is a grade C", marks);
	}
	else if (marks < 69)
	{
		printf("%d%% is a grade B", marks);
	}
	else
	{
		printf("%d%% is a grade A", marks);
	}
}