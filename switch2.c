#include <stdio.h>

/**
 *A program that prints out the
 *the dosage of a childrens cough syrup according
 *to the ages from 1 to 5
 */

int main(void)
{

	int age;

	printf("Enter age from 1 to 5: ");
	scanf("%i", &age);

	switch (age)
{
	case 1:
	printf("For age 1, give half a tea spoon");
	break;

	case 2:
	printf("For age 2, give one tea spoon");
	break;

	case 3:
	printf("For age 3, give one and half tea spoon");
	break;

	case 4:
	printf("For age 4, give two tea spoons");
	break;

	case 5:
	printf("For age 5, give 15ml ");
	break;

	default:
	printf("The age you entered is not appropriate for this cough syrup");


}

	return (0);
}
