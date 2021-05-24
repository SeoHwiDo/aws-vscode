#include<stdio.h>
int main(void){
    printf("서휘도 20205188\n");
    char x;
    int y=1;
    for(int i=0;i<2;i++){
        printf("숫자를 입력하세요:");
        x=getchar();
        getchar();
        x= (x>='0' && x<='9')? x-'0': 1;    
        y*=x;
    }
    printf("두 수의 곱은 = %d",y);
}