#include <stdio.h>

int main(void)                                                                  
{                                                                               
    int luckyNum = 5;                                                       
    int guess = 0;                                                              
    int guessTimes = 1;                                                     
    
    while(guess != luckyNum && guessTimes <= 3)                             
    {                                                                               
        printf("Guess the lucky number: ");                                     
        scanf("%i", &guess);                                                    
        guessTimes++;                                                           
    }                                                                               
    
    if(guess == luckyNum)                   
    {                                                                       
        printf("Congratulations You Won!") ;   
    }                                                                               
   else if(guessTimes > 3 && guess != luckyNum)                                                           
    {                                                                       
        printf("You are out of Guesses");                             
    }                                                                       
    else
    {
	printf("You lost..... Try Again!");
    }
    return (0);                                                             
}
	
