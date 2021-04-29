#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int     main()
{
        const int MIN=1,MAX=99;
        srand(time(NULL));
        int guess,score=1;
        int a = (rand()%MAX+MIN);

        printf("Try to guess the mystery number^^\n");
        while(1){
        scanf("%d",&guess);
        if(guess==a)
                break;
        else if(guess<a){
                printf("More\n");
                score++;
        }
        else{
                printf("Less\n");
                score++;
        }

        }
        printf("You Won\nAttempts:%d\n",score);


        return 0;

}