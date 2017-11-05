/* Zusatzaufgabe 2
 * Zahlenraten
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int args, char** argv) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int random_number = rand() % n + 1, guess;

    do {
        printf("Your guess: ");
        scanf("%i", &guess);

        if (guess < random_number) {
            printf("Too low.\n");
        }

        if (guess > random_number) {
            printf("Too high.\n");
        }
    } while (guess != random_number);
    
    printf("Correct.\n");
    
    return 0;
}
