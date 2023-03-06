#include <stdio.h>


int main(void)
{
	int nums = 40;
	int *pNums = &nums;
	double height = 600.0;
	double *pHeight = &height;

	int age = 27;
	int *pAge = &age;
	printf("%f\n%i\n%i", *pHeight, *pAge, *pNums);





	return (0);
}
