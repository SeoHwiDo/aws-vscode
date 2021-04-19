#include<stdio.h>

void ex_01(){
    char str[4];
    for(int i=0;i<4;i++){
        printf("문자입력:");
        str[i]=getchar();
        while (getchar()!='\n');
    }
    printf("입력된 문자=%s",str);
}
void ex_04(){
    char str[30];
    while(1){
        int count=0;
        printf("문자열 입력:");
        fgets(str,30,stdin);
        if(str[0]=='\n')break;
        for(int i=0;str[i]!='\n';i++)count++;
        printf("문자열 길이:%d",count);
    }
    
}

void ex_05(){
    char str[30];
    char ch;
    while(1){
        int count=0;
        printf("문자열 입력:");
        fgets(str,30,stdin);
        printf("문자 입력:");
        ch=getchar();
        while (getchar()!='\n');
        if(str[0]=='\n')break;
        for(int i=0;str[i]!='\n';i++)if(str[i]==ch)count++;
        printf("%s에서 %c는%d개",str,ch,count);
    }
}
void ex_09(){
    int form[4],sum=0,min=2147483647,max=-2147483648;    
    for(int i=0;i<4;i++){
        printf("정수입력:");
        scanf("%d",form+i);
        sum+=form[i];
        if(form[i]>max)max=form[i];
        if(form[i]<min)min=form[i];
    }
    printf("합:%d\n가장 큰 수:%d\n가장 작은 수:%d",sum,max,min);
    
}
int main(){
    ex_09();
}