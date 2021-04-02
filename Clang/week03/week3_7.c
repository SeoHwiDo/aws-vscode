#include<stdio.h>
#include<math.h>
#define PI 3.141592
int week3_5(){
    float r;
    printf("실수를 입력하세요:");
    scanf("%f",&r);
    printf("입력하신 실수를 소수 한자리만 출력하면:%.1f",r);
    return 0;
}
int week3_7(){
    float r;
    printf("원반지름 입력:");
    scanf("%f",&r);

    printf("원반지름:%1.2f\n원면적:%1.2f\n원둘레:%1.2f\n",r,r*r*PI ,2*PI*r );
}
int week3_8(){
    
}
int main(){
    week3_7();
    return 0;
}
