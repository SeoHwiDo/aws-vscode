#include<stdio.h>
void assign(){
    char str[30],*pstr;
    int i,j;
    pstr=str;
    printf("서휘도 20205188\n한 단어를 입력하세요:");
    gets(pstr);
    for(i=0;*pstr;i++,pstr++);
     printf("입력한 단어를 반대로 출력합니다:");
    for(j=0;j<i;j++,pstr--){
         printf("%c",*(pstr-1));
    }
    printf("\n");
}
int main(){
    assign();
}