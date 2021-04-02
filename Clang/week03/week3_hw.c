#include<stdio.h>
int main(void){
    printf("20205188 서휘도\n");
    float mid,last;
    printf("중간점수:");
    scanf("%f",&mid);
    while(getchar()!='\n');
    printf("기말점수:");
    scanf("%f",&last);
    while(getchar()!='\n');
    printf("합:%-10.3f\n평균:%-10.3f",mid+last,(mid+last)/2);
    return 0;
}