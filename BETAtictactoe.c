#include <stdio.h>
// TIC TAC TOE GAME;
// game devolopment is in progress
// TRY BETA VERSION NOW >>>
int main () {    
    int a=0, t=0, t1=1, t2=1, t3=1, t4=1, t5=1, t6=1, t7=1, t8=1, t9=1;
    int ar[3][3] = {{10,11 ,12}, {13, 14, 15}, {16, 17, 18}};
    while (1) {
        if(t1==1 || t2==1 || t3==1 || t4==1 || t5==1 || t6==1 || t7==1 || t8==1 || t9==1) {
            if(t==0) {
                printf("player one turn: ");
                t=1;
                scanf("%d", &a);
                if(a==1) {
                    if(t1) {
                        ar[0][0]=1;
                        t1=0;
                    }
                }
                if(a==2) {
                    if(t2) {
                        ar[0][1]=1;
                        t2=0;
                    }
                }
                if(a==3) {
                    if(t3) {
                        ar[0][2]=1;
                        t3=0;
                    }
                }
                if(a==4) {
                    if(t4) {
                        ar[1][0]=1;
                        t4=0;
                    }
                }
                if(a==5) {
                    if(t5) {
                        ar[1][1]=1;
                        t5=0;
                    }
                }
                if(a==6) {
                    if(t6) {
                        ar[1][2]=1;
                        t6=0;
                    }
                }
                if(a==7) {
                    if(t7) {
                        ar[2][0]=1;
                        t7=0;
                    }
                }
                if(a==8) {
                    if(t8) {
                        ar[2][1]=1;
                        t8=0;
                    }
                }
                if(a==9) {
                    if(t9) {
                        ar[2][2]=1;
                        t9=0;
                    }
                }
            }
            else {
                printf("player two turn: ");
                scanf("%d", &a);
                t=0;
                if(a==1) {
                    if(t1) {
                        ar[0][0]=2;
                        t1=0;
                    }
                }
                if(a==2) {
                    if(t2) {
                        ar[0][1]=2;
                        t2=0;
                    }
                }
                if(a==3) {
                    if(t3) {
                        ar[0][2]=2;
                        t3=0;
                    }
                }
                if(a==4) {
                    if(t4) {
                        ar[1][0]=2;
                        t4=0;
                    }
                }
                if(a==5) {
                    if(t5) {
                        ar[1][1]=2;
                        t5=0;
                    }
                }
                if(a==6) {
                    if(t6) {
                        ar[1][2]=2;
                        t6=0;
                    }
                }
                if(a==7) {
                    if(t7) {
                        ar[2][0]=2;
                        t7=0;
                    }
                }
                if(a==8) {
                    if(t8) {
                        ar[2][1]=2;
                        t8=0;
                    }
                }
                if(a==9) {
                    if(t9) {
                        ar[2][2]=2;
                        t9=1;
                    }
                }
            }

            if (ar[0][0] == ar[0][1] && ar[0][0] == ar[0][2]) {
                if (ar[0][0]==1) {
                    printf("player 1 won");
                }
                else {
                    printf("player 2 won");
                }
                return 0;
            }
            if (ar[0][0] == ar[1][1] && ar[0][0] == ar[2][2]) {
                if (ar[0][0]==1) {
                    printf("player 1 won");
                }
                else {
                    printf("player 2 won");
                }
                return 0;
            }
            if (ar[2][0] == ar[2][1] && ar[2][0] == ar[2][2]) {
                if (ar[2][0]==1) {
                    printf("player 1 won");
                }
                else {
                    printf("player 2 won");
                }
                return 0;
            }
            if (ar[0][0] == ar[1][0] && ar[0][0] == ar[2][0]) {
                if (ar[0][0]==1) {
                    printf("player 1 won");
                }
                else {
                    printf("player 2 won");
                }
                return 0;
            }
            if (ar[0][1] == ar[1][1] && ar[0][1] == ar[2][1]) {
                if (ar[0][1]==1) {
                    printf("player 1 won");
                }
                else {
                    printf("player 2 won");
                }
                return 0;
            }
            if (ar[0][2] == ar[1][2] && ar[0][2] == ar[2][2]) {
                if (ar[0][2]==1) {
                    printf("player 1 won");
                }
                else {
                    printf("player 2 won");
                }
                return 0;
            }
        }
        else {
            printf("Game tie, No one won the game");
            return 0;
        }
    }
}
