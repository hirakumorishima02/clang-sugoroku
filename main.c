#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_rand();
void start_sugoroku();
void description();
void repeat();

int main(void) {
    description();
    init_rand();
    start_sugoroku();
    repeat();
    return 0;
}

void init_rand(){
    srand((unsigned int)time(NULL));
}

void start_sugoroku(){
    int goal=30;
    while(goal!=0){
        int i,num,dise,sum=0;

        printf("ダイスの数:");
        scanf("%d", &num);

        for(i=0;i<num;i++){
            sum += 1 + rand() % 3;
        }
        printf("ダイスの総数:%d\n", sum);
        goal -= sum;
        if(goal<0) {
            printf("%dマス進みすぎたので、%dマス戻ります。\n", goal * -1,goal * -1);
            goal += goal * -2;
        };
        printf("ゴールまで:%dマス\n", goal);
    }

    puts("goal!");

    return;
}

void repeat(){
    int ans;
    while(ans!=2) {
        puts("もう1度遊びますか?(1=Yes/2=No)");
        scanf("%d", &ans);
        if(ans==1) start_sugoroku();
        if(ans==2) puts("また遊んでね!Bye！");
    };
    return;
}

void description(){
    puts("▲すごろく▼");
    puts("----------------------------------------------");
    puts("30マス先にゴールがあります。\n1,2,3の３つの目を持つ特別なサイコロ10個を、\n好きな数だけ振って駒を進めます。\nぴったり上がりに止まれば終わりです。目の数が多\nければ、余った目の数だけ戻ります。");
    puts("----------------------------------------------");
    return;
}