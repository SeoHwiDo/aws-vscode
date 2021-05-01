#include<stdio.h>
#include<string.h>
void ex_01(){
    double sum=0,num[5],*p;
    for(int i=0;i<5;i++){
        printf("숫자를 입력하세요:");
        scanf("%lf",num+i);
        sum+=num[i];
    }
    p=&sum;
    printf("평균은=%lf",*p/5);
}
void ex_02(){
    int num[]={5,7,22,53,88,71,101},*p;
    for(int i=0;i<len(num);*(p++)){
        p=&num[i];
        if((*p)/2!=0)printf("%d,",*p);
        i++;
    }
}
int main(){
    ex_02();
}