#include <stdio.h>
#include <string.h>
struct employee
{
	char name[20];
	int age;
	char status[20];
	double height;
};


int main(void)
{
	
	struct employee employee1;
	strcpy(employee1.name, "Mustapha osman");
	employee1.age = 25;
	strcpy(employee1.status, "Single");
	employee1.height = 5.9;

	printf("Your name is: %s\nYour age is: %i\nYour marital status is: %s\nYour height is: %f",employee1.name, employee1.age, employee1.status, employee1.height);











	return (0);
}
