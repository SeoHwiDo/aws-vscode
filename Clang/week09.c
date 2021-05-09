#include <stdio.h>
void ex_01(){
    double sum=0,num[5],*p;
    p=num;
    for(int i=0;i<sizeof(num)/sizeof(double);i++){
        printf("?닽?옄瑜? ?엯?젰?븯?꽭?슂:");
        scanf("%lf",p+i);
    }
    for(int i=0;i<sizeof(num)/sizeof(double);i++){
        sum += *(p+i);
    }
    printf("?룊洹좎?? = %lf",sum/(sizeof(num)/sizeof(double)));

}
void assign(){
    char str[30],*pstr;
    int i;
    pstr=str;
    printf("서휘도 20205188\n 문자열 입력:");
    gets(pstr);
    for(i=0;*pstr;i++,pstr++);
    printf("%d",i);
    
}
int main(){
    assign();

}