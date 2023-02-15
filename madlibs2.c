#include <stdio.h>
/** This is a game called madlibs**/


int main(void)
{

int age;
char name1 [20];
char name2 [20];
int height;
char sign [20];
char gender [10];
char work1 [20];
char work2 [20];


printf("What is your full name: ");
scanf("%s%s", name1, name2);

printf("What job do u want to do in future: ");
scanf("%s%s", work1, work2);

printf("What is your age: ");
scanf("%i", &age);


printf("How tall are you: ");
scanf("%i", &height);


printf("What is your astronomical sign: ");
scanf("%s", sign);


printf("What type of gender do you like to mingle with: ");
scanf("%s", gender);








printf("My name is %s %s I want to be a \n", name1, name2);


printf("I want to be a %s %s \n", work1, work2);


printf("I am is %i years old\n", age);

printf("I am %i foot tall\n", height);

printf("My astronomical sign is %s\n", sign);

printf("I like to mingle with %s\n", gender);





return 0;


}
