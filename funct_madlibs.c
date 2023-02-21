#include <stdio.h>
#include <unistd.h>

void madlibs(char name1[], char name2[], int age, double height, char gender[], char type[], char sign[])
{


	printf("What is ur mame? ");
	scanf("%s%s", name1, name2);

	printf("Whats ur age dude? ");
	scanf("%i", &age);

	printf("Whats ur height nigga? ");
	scanf("%lf", &height);

	printf("Are you male, Female or Non Binary? ");
	scanf("%s", gender);

	printf("What gender are u into sexually? ");
	scanf("%s", type);

	printf("What is your Astronomical sign? ");
	scanf("%s", sign);


	printf("My name is %s %s\n", name1, name2);
	printf("I am %i years old\n", age);
	printf("I am %lf foot tall\n", height);
	printf("I am a %s \n", gender);
	printf("I preffer to mingle with %s\n", type);
	printf("My astronomical sign is %s\n", sign);
}
int main(void)
{
	char name1[20];
	char name2[20];
	int age;
	double height;
	char gender[20];
	char type[20];
	char sign[15];

	madlibs(name1, name2, age, height, gender, type, sign);






	return (0);
}
