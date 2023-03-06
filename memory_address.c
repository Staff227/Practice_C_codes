#include <stdio.h>
#include <string.h>


int main(void)
{
	int nums = 123;
	int ages [] = {17, 21, 23, 18, 14, 50};
	
	struct tenant{
	char name [20];
	double height;
	};
	struct tenant tenant1;
	strcpy(tenant1.name, "Mustapha Osman");
	tenant1.height = 6.1;


	printf("nums : %p\nages: %p\nstudent1.name: %p\n", &nums, &ages[50], tenant1.name);
















	return (0);
}
