#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void sup (char name [], int age) 
{
      printf("Hello %s ur age is %i\n", name, age);


}

int main ()
{

         
     printf("the top\n");
     sup ("zack", 24);   
     sup ("staff", 23);   
     sup ("mariam", 25);   

     printf ("goes to the bottom");
      
           return 0;
}
