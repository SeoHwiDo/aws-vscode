#include<stdio.h>
int main(void){
    printf("서휘도 20205188\n");
    char x;
    int y=1;
    for(int i=0;i<2;i++){
        printf("숫자를 입력하세요:");
        x=getchar();
        getchar();
        if(x>=48&&x<=58){
            x-=48;    
        }else{
            x=1;
        }
        y*=x;
    }
    printf("두 수의 곱은 = %d",y);
    
}