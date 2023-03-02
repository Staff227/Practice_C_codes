#include <stdio.h>
#include <string.h>

struct Employee_data{
	char name [25];
	int age;
	char marital_status [10];
	char qualification [15];
	char prev_company [25];
	double height;
};
int main(void)
{
	struct Employee_data staff1;
	strcpy( staff1.name, "Mustapha");
	staff1.age, 27;
	strcpy( staff1.marital_status, "single");
	strcpy( staff1.qualification, "Masters degree");
	strcpy( staff1.prev_company, "Fan milk company limited");
	staff1.height, 6.1;

	return (0);
}
	
