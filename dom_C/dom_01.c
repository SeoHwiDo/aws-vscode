#include<stdio.h>
void number(){
    int number=88;
    printf("8진=%o\n",number);
    printf("10진=%d\n",number);
    printf("16진=%x\n",number);
    printf("문자형=%c\n",number);

}
void scan(){
    int age;
    printf("당신의 나이를 입력하세요\n");
    scanf("%d",&age);
    printf("당신의 나이는 %d 입니다.",age);
}
void blink(){
    while(1){
        printf("---------\r");
        printf("=========\r");
    }
}
void get_ch(){
    printf("input one letter:");
    char ch=getchar();
    putchar(ch);
    printf("\n");

}
void get_str(){
    char name[20];
    printf("input your name:");
    gets(name);
    puts(name);
}
void ex_if(){
    int num;
    printf("input unsigned number:\n");
    scanf("%d",&num);
    if(num%2)printf("this number is odd"); 
    else printf("this number is even");
}
int main(void){
    ex_if();
    return 0;
}