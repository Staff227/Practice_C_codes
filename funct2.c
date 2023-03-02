#include <stdio.h>
int multiply(int num1, int num2)
{

	int results;

	printf("Enter first number: ");
	scanf("%i", &num1);
	
	printf("Enter second number: ");
	scanf("%i", &num2);
	
	results = num1 * num2;



	return (results);
}
int main(void)
{
	int num1;
	int num2;


	printf("%i", multiply(num1, num2));






	return (0);
}
