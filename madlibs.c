#include <stdio.h>





int main()
{
         
         char name1 [20];
         char name2 [20];
	 int age;
	 char work1 [20];
	 char work2 [20];
	 char colour [20];
	 char gender [20];
	 printf("Enter first and second name ");
         scanf("%s%s", name1, name2);

	 printf("Enter your age ");
         scanf("%i", &age);

	 printf("Enter career you are currntly training for ");
         scanf("%s%s", work1, work2);

	 printf("Enter your favourite colour ");
         scanf("%s", colour);

	 printf("Enter the gender u like to mingle with ");
         scanf("%s", gender);


         printf("My name is %s %s\n", name1, name2);

         printf("I am %i years old\n", age);

         printf("Im currently training to be a %s %s\n", work1, work2);

         printf("I love the colour %s\n", colour);

         printf("I also love %s too\n", gender);

         

         return 0;
}
