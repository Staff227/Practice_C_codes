#include <stdio.h>





int main(void)
{
	int num1;
	int num2;
	int num3;
	int results;

	printf("Enter first number: ");
	scanf("%i", &num1);

	printf("Enter second number: ");
	scanf("%i", &num2);
	printf("Enter third number: ");
	scanf("%i", &num3);


	if(num1 > num2 && num1 >num3)
{
	results = num1;
	printf("%i", results);
}

	else if(num2 > num1 && num2 > num3)
{
	results = num2;
	printf("%i", results);

}
	else
{
	results = num3;
	printf("%i", results);
} 

	return (0);
}
