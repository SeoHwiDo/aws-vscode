#include <stdio.h>
#include <stdlib.h>
void ex_01(){
    printf("정수를 입력하세요: ");
    int scan;
    scanf("%d",&scan);
    if(scan>0) printf("양수입니다.");
    else if(scan<0) printf("음수입니다.");
    else printf("0입니다.");
    
}
void ex_02(){
     printf("정수를 입력하세요: ");
    int scan;
    scanf("%d",&scan);
    switch (scan/2)
    {
    case 0 ... 9 :
        printf("NOK");
        break;
    default:
        printf("OK");
        break;
    }
}
void ex_03(){
    float scan,sum;
    do{
        printf("숫자를 입력하세요:");
        scanf("%f",&scan);
        sum+=scan;
    }while (scan>-100&&scan<100);
    printf("-100이상 100이하 숫자들의 합=%.2f",sum);
    

}
void ex_05(){
    int a=0;
    int b;

    scanf("%d",&a);
    for(b=a;b>0;b=b/2){
        if(1&b) printf("1");
        else printf("0");
    }
}
void ex_06(){
    int b,a=0,count=0;
    printf("정수를 입력하세요 :" );
    scanf("%d",&a);
    for(b=a;b>0;b=b/2){
        if(a&b) count++;
    }
    printf("2진수로 만들때 1이 나타난 횟수:%d",count);
}
void ex_07(){
    printf("서휘도 20205188\n");
    int a=7;
    for(int i=0,a=7;7>=i;i++,a--){
        for(int k=0;k<a;k++) printf(" ");
        for(int j=-i;j<=i;j++) printf("%d",abs(j));
        //삼항연산자로 시도 하기
    printf("\n");
    }
}
int main(){
    ex_07();
}