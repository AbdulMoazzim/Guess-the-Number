#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
      srand(time(NULL));
      int guess, val = (rand()%100) + 1;
      int turn = 0;

      do {
            printf("Guess the Number: ");
            scanf("%d", &guess);
            turn++;
            if (guess > val) {
                  printf("Your guess is higher than actual value\n");
            }
            else if (guess < val) {
                  printf("Your guess is lower than actual value\n");
            }
            else {
                  break;
            }

      } while (guess != val);

      printf("Eureka! You found the number in %d turns!\n", turn);

      return 0;
}
