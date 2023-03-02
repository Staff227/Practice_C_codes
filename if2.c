#include <stdio.h>




int main(void)
{
	int num1;
	int num2;
	char operator;
	int results;

	printf("Enter first number: ");
	scanf("%i", &num1);

	printf("Enter the operator you will like to use: ");
	scanf(" %c", &operator);


	printf("Enter first number: ");
	scanf("%i", &num2);

	if(operator == '+')
{
	results = num1 + num2;
	printf("%i", results);
}
	if(operator == '-')
{
	results = num1 - num2;
	printf("%i", results);
}
	if(operator == '*')
{
	results = num1 * num2;
	printf("%i", results);
}
	if(operator == '/')
{
	results = num1 / num2;
	printf("%i", results);
}

	return (0);
}
