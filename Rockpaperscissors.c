#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, comp;
    srand(time(0));

    printf("Rock Paper Scissors Game\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &user);

    comp = rand() % 3 + 1;

    printf("Computer chose: %d\n", comp);

    if (user == comp)
        printf("It's a Draw!\n");
    else if ((user == 1 && comp == 3) ||
             (user == 2 && comp == 1) ||
             (user == 3 && comp == 2))
        printf("You Win!\n");
    else
        printf("Computer Wins!\n");

    return 0;
}