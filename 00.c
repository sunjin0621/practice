#include <cs50.h>
#include <stdio.h>

int main()
{
    int score[8]={95, 90, 85, 80, 75, 70, 65, 60};
    string grade[9]={"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
    printf("학점 프로그램\n");
    printf("종료를 원하면 \"999\" 를 입력\n");
    printf("[학점 테이블]\n");
    printf("점수: 95     90      85      80      75      70      65      60      0\n");
    printf("학점: A+     A       B+      B       C+      C       D+      D       F\n");

    for (;;){      
    int n = get_int("성적을 입력하세요 (0 ~ 100): ");

    if (n==999){
        printf("학점 프로그램을 종료합니다.\n");
        break;
    }

    if(n>100 && n>0){
        printf("** %i 성적을 올바르게 입력하세요! (0 ~ 100)\n",n);
        continue;
    }

    if(n>=score[0]){
        printf("학점은 %s입니다.\n",grade[0]);
        } 
    if (score[0]>n && n>=score[1]){
        printf("학점은 %s입니다.\n",grade[1]);
        } 
    if (score[1]>n && n>=score[2]){
        printf("학점은 %s입니다.\n",grade[2]);
        }
    if(score[2]>n && n>=score[3]){
        printf("학점은 %s입니다.\n",grade[3]);
        } 
    if (score[3]>n && n>=score[4]){
        printf("학점은 %s입니다.\n",grade[4]);
                }
              
    if (score[4]>n && n>=score[5]){
        printf("학점은 %s입니다.\n",grade[5]);
                    } 
    if (score[5]>n && n>=score[6]){
        printf("학점은 %s입니다.\n",grade[6]);
                        } 
    if (score[6]>n && n>=score[7]){
        printf("학점은 %s입니다.\n",grade[7]);
                            }
    if (score[7]>n){
        printf("학점은 %s입니다.\n",grade[8]);
                                } 
        }
    }
