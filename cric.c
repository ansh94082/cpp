#include <stdio.h>


int main() {


    int k = 0;
    int extras = 0;
    int batMan1 = 0;
    int batMan2 = 0;
    int active = 0;
    printf("Match started");
    for(int i = 1; i <=12; i++) {
        scanf("%d",&k);
        if(k <=6){

            if(active == 0){
                
                    batMan1 += k;
                    printf("batsMan1 has scored %d runs till now", batMan1);
                    if(k%2==0){
                        active = 0;
                    }
                    else{
                        active = 1;
                    }
        }
            if(active == 1){
                batMan2 += k;
                printf("batsMan2 has scored %d runs till now", batMan2);

                if(k%2 == 0){
                    active = 1;
                }
                else{
                    active = 0;
                }
            }
        }

        if(k == 7) {
            i--;
        }
        if(k == 8) {
            batMan1++;
            i--;
        }
        if(k == 9){
            int m;
            scanf("%d", &m);
            extras += m;
        }
        int finalScore = extras + batMan1 + batMan2;
        if(k < 0){
            printf("batsMan1 has scored %d runs till now\n", batMan1);
            printf("batsMan2 has scored %d runs till now\n", batMan2);
            printf("final score : %d", finalScore);
            printf("The match has ended due to lack of players\n");
            return 0;

        }   


    }
    return 0;

}