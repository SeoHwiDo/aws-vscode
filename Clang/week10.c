#include<stdio.h>
void assign(){
    char str[30],*pstr;
    int i,j;
    pstr=str;
    printf("한 단어를 입력하세요:");
    fgets(pstr,30,stdin);
    for(i=0;*pstr;i++,pstr++);
    for(j=i-1;j>0;j--,pstr--){
        printf("%c",pstr[i]);
    }
}
int main(){
    assign();
}