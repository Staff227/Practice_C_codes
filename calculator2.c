#include <stdio.h>




int main(void)
{
	double num1;
	double num2;
	char sign;
	double results;

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter the operator you would like to use for this calculation: ");
	scanf(" %c", &sign);

	printf("Enter second number: ");
	scanf("%lf", &num2);

	if(sign == '/')
{
	results = num1 / num2;
	printf("%f", results);
}

	if(sign == '*')
{
	results = num1 * num2;
	printf("%f", results);
}

	if(sign == '-')
{
	results = num1 - num2;
	printf("%f", results);
}

	if(sign == '+')
{
	results = num1 + num2;
	printf("%f", results);
}










	return (0);
}
