#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_rand();

int main(void) {
    int goal=30,dise1,dise2,dise3,num;

    init_rand();

    while(goal>=0){
        puts("ダイスをいくつ振る?");
        scanf("%d", &num);

        if(num==1){
            dise1 = 1 + rand() % 3;
            goal -= dise1;
        } else if(num==2){
            dise1 = 1 + rand() % 3;
            dise2 = 1 + rand() % 3;
            goal -= dise1;
            goal -= dise2;
        } else{
            dise1 = 1 + rand() % 3;
            dise2 = 1 + rand() % 3;
            dise3 = 1 + rand() % 3;
            goal -= dise1;
            goal -= dise2;
            goal -= dise3;
        }

        printf("ゴールまであと…%d\n", goal);
    }

    puts("goal!");

    return 0;
}

void init_rand(){
    srand((unsigned int)time(NULL));
}