#include <stdio.h>
void ex_01(){
    double sum=0,num[5],*p;
    p=num;
    for(int i=0;i<sizeof(num)/sizeof(double);i++){
        printf("숫자를 입력하세요:");
        scanf("%lf",p+i);
    }
    for(int i=0;i<sizeof(num)/sizeof(double);i++){
        sum += *(p+i);
    }
    printf("평균은 = %lf",sum/(sizeof(num)/sizeof(double)));

}
void assign(){
    char str[30],*pstr;
    int i;
    pstr=str;
    printf("서휘도 20205188\n문자열 입력:");
    fgets(pstr,30,stdin);
    for(i=0;*pstr;i++,pstr++);
    printf("입력된 문자열의 길이=%d",i);
}
int main(){
    assign();

}