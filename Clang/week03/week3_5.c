#include<stdio.h>
int main(){
    float r;
    printf("실수를 입력하세요:");
    scanf("%f",&r);
    printf("입력하신 실수를 소수 한자리만 출력하면:%.1f",r);
    return 0;
}