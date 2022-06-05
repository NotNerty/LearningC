#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, guess;
    char name[30];
    char again[10];
    //var for rng startup
    time_t t;
    //start rng
    srand((unsigned) time(&t));
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello %s!\n", name);

    //Random number between 1 and 100
    while(1 == 1){
        num = (rand() % 100) + 1;
        printf("\n");
        printf("Guess a number between 1 and 100.\n");

        for(int i = 0; i < 3; i++){
            scanf("%d", &guess);

            if(guess == num){
                printf("Correct!!\n");
                break;
            } else {
                printf("Wrong!!\n");
            }
        }
        printf("\nPlay again?\n");
        scanf("%s", again);
        if(again[0] == 'y'){
            continue;
        } else {
            break;
        }
    }

    return(0);
}
