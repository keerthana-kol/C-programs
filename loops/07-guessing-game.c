/*Write a program that allows the user to guess a secret number initialized in the program. The program should give hints whether the guessed number is too low or too high, and continue until the user guesses the correct number.
For each guess, the program should display:
"Too low! Try again." if the guess is smaller than the secret number.
"Too high! Try again." if the guess is larger than the secret number.
"Congratulations! You guessed it right." when the guess is correct.

Constraints:
The secret number is fixed in the code (e.g., 7).
The user can guess multiple times until the correct number is found.
*/
#include <stdio.h>
int main() {
    int secret = 7;  // number to guess
    int guess;
    printf("Guess the number between 1 and 10: \n");

    do {
        scanf("%d", &guess);
        if(guess < secret)
      {
            printf("Too low! Try again: ");
        } 
         else if(guess > secret)
        {
            printf("Too high! Try again: ");
        }
         else
        {
            printf("Congratulations! You guessed it right.\n");
        }

    } 
       while(guess != secret);  // loop continues until guess is correct

    return 0;
}
/* sample output:
Guess the number between 1 and 10:
5
Too low! Try again:
9
Too high! Try again:
7
Congratulations! You guessed it right.
*/
