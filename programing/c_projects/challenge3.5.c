#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RockSissorsPapper(int run){
srand((int)time(NULL));//랜덤값
int Win = 0, Lose = 0, Tie = 0, P = 0;    
int RSP_rand_date = rand()%3 + 1;

for(int i = 0; i < run; i++){
    printf("바위는 1, 가위는 2, 보는 3 선택: ");
    scanf("%d", &P);
    
    switch(P){                             
        case 1:
            switch(RSP_rand_date){
                case 1:  // P가 1이면
                printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다!\n");
                Lose +=1; 
                break;
                case 2:
                printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
                Win +=1; 
                break;
                case 3:
                printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
                Tie +=1; 
                break;
        }
        break;
         case 2:
            switch(RSP_rand_date){
                case 1:  // P가 2이면
                printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다!\n");
                Lose +=1; 
                break;
                case 2: 
                printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!\n");
                Tie +=1;
                break;
                case 3:
                printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다!\n");
                Win +=1;
                break;
        }
        break;
        case 3:
            switch(RSP_rand_date){
                case 1:  // P가 1이면
                printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다!\n");
                Win +=1;
                break;
                case 2:
                printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다!\n");
                Lose +=1;
                break;
                case 3:
                printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!\n");
                Tie +=1;
                break;
        }
        break;
    }
    
}
    printf("게임의 결과 : %d승, %d무, %d패 \n", Win, Tie, Lose);
    return 0;
}

int main(void){
    int Run;
    printf("몇번 가위바위보를 하실껀가요?: ");
    scanf("%d",&Run);
    RockSissorsPapper(Run);
    
    return 0;
}