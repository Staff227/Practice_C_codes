#include <stdio.h>
#include <unistd.h>

void sayhi(char name[], int age)
{
	printf("Hello %s you are %i years old\n", name, age);


}
int main(void)
{
	printf("This should be at the top\n");
	sayhi("Staff", 48);
	sayhi("Rogue", 23);
	sayhi("Mane", 18);
	printf("This should be at the bottom\n");
	return (0);
}
