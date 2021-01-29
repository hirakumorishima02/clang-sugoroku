#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ransuu();
int sugoroku(/*int saikoro*/);

int main(void){
    int saikoro,result,goal=30;
    // scanf("%d", &saikoro);

    while(goal!=0){
        result = sugoroku(/*saikoro*/);
        goal = goal - result;
        if(goal==0) break;
    }

    puts("ゴール");

    return 0;
}

int ransuu(){
    int i;
    srand((unsigned int)time(NULL)); // 乱数発生のおまじない
    i = 0 + rand() % 4; // 乱数発生のおまじない
    return i;
}

int sugoroku(/*int saikoro*/) {
    int result;
    result = ransuu();
    printf("%d", result);
    return result;
}