#include <stdio.h>



int main(void)
{

	char grade;

	printf("Enter your grade: ");
	scanf(" %c", &grade);

	switch(grade)
{
	case 'A' :
	printf("You did outstanding");
	break;


	case 'B' :
	printf("You did good");
	break;


	case 'C' :
	printf("You did good");
	break;


	case 'D' :
	printf("Better luck next time");
	break;


	case 'E' :
	printf("You did poor");
	break;




	case 'F' :
	printf("You failed");
	break;


	default :

	printf("The character you have entered is invalid");
	break;
}

	return (0);
}
