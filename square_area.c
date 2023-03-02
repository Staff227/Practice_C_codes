#include <stdio.h>



int main(void)
{
	int side;
	
	printf("Enter number of sides: ");
	scanf("%i", &side);
	int area = side *  side;
	printf("The area of a square with side %i is: %i ", side, area);







	return (0);
}
