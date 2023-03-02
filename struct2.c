#include <stdio.h>
#include <string.h>

int main(void)
{

	struct employee{
	char name[20];
	int age;
	double height;
	};

	struct employee employee1;
	strcpy(employee1.name, "Mustapha Osman");
	employee1.age = 24;
	employee1.height = 6.2;

	printf("Employee age: %f", employee1.height);












	return (0);
}
