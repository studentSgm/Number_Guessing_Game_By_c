// we will  write a program that generates a random number and asks the  player to huess it .
// If the players guess is higher than the actual number , the program  display "Lower number Plese ".
//  Smilarity, the  users guess is too low,the program prints "Higher number please".

// When the user guesses the correct number,the program display the number of guesses the player   
// used to arrive at the number.

//Hint:- Use Loop & use random  number generstor

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
 //Intialize random number generated 
 srand(time(0));

 //Generate random number between 1 and 100
 int randomNumber =(rand() % 100) + 1;
 int no_of_guesses = 0;
 int guessed;

 //print the random number 
//  printf("Random Number : %d\n", randomNumber);


do{
    printf("Guess the number:");
    scanf("%d",&guessed);
    if(guessed>randomNumber)
    {
        printf("Lower No please!\n");
    }
    else{
      printf("Higher No Please!\n");
    }
    no_of_guesses++;
}
while (guessed!=randomNumber);
{
    printf("You guessed the Number in %d guesses",no_of_guesses);
}

return 0;
}