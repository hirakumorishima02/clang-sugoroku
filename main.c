#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int goal=30,dise=0;

    srand((unsigned int)time(NULL));

    while(goal>=0){
        dise = 1 + rand() % 3;
        goal -= dise;
        printf("%d", dise);
    }

    puts("goal!");

    return 0;
}