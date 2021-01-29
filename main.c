#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_rand();

int main(void) {
    int goal=30;

    init_rand();

    while(goal>=0){
        int i,num,dise,sum=0;

        puts("ダイスをいくつ振る?");
        scanf("%d", &num);

        for(i=0;i<num;i++){
            sum += 1 + rand() % 3;
        }
        printf("出た目の総数は%d\nです。", sum);
        goal -= sum;
        printf("ゴールまであと…%d\n", goal);
    }

    puts("goal!");

    return 0;
}

void init_rand(){
    srand((unsigned int)time(NULL));
}