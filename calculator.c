#include <stdio.h>



int main(void)
{

	int num1;
	int num2;
	char operator;


	printf("Enter first number: \n");
	scanf("%i", &num1);
	printf("Enter the operator you will like to use for this calculation: \n");
	scanf(" %c", &operator);
	printf("Enter second number: \n");
	scanf("%i", &num2);


	if(operator == '-')
{
	printf("%i", num1 - num2);
}
	if(operator == '/')
{
	printf("%i", num1 / num2);
}

	if(operator == '*')
{
	printf("%i", num1 * num2);
}

	if(operator == '+')
{
	printf("%i", num1 + num2);
}


	return (0);
}
