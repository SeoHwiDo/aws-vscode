#include<stdio.h>
#include<conio.h>
void ex_01(){
    char str[4];
    for(int i=0;i<4;i++){
        printf("문자 ?��?��:");
        str[i]=getche();
    }
    printf("?��?��받�?? 문자=%s",str);
}
void ex_04(){
    char str[30];
    while(1){
        int count=0;
        printf("?��몄옄�뿴 �엯�젰:");
        fgets(str,30,stdin);
        if(str[0]=='\n')break;
        for(int i=0;str[i]!='\n';i++)count++;
        printf("?��몄옄�뿴 湲몄?��:%d",count);
    }
    
}

void ex_05(){
    char str[30];
    char ch;
    while(1){
        int count=0;
        printf("?��몄옄�뿴 �엯�젰:");
        fgets(str,30,stdin);
        printf("?��몄옄 �엯�젰:");
        ch=getchar();
        while (getchar()!='\n');
        if(str[0]=='\n')break;
        for(int i=0;str[i]!='\n';i++)if(str[i]==ch)count++;
        printf("%s�뿉�꽌 %c�뒗%d媛�",str,ch,count);
    }
}
void ex_09(){
    int form[4],sum=0,min=2147483647,max=-2147483648;    
    for(int i=0;i<4;i++){
        printf("�젙�닔�엯�젰:");
        scanf("%d",form+i);
        sum+=form[i];
        if(form[i]>max)max=form[i];
        if(form[i]<min)min=form[i];
    }
    printf("��??:%d\n媛��옣 �겙 �닔:%d\n媛��옣 �옉���? �닔:%d",sum,max,min);
    
}
void test(){
    char a[2][10];
    for(int i=0;i<2;i++){
        fgets(a[i],10,stdin);
    }
    for(int i=0;i<2;i++){
        for(int j=0;a[i][j]!='\0';j++){
            printf("%d,%c\n",i,a[i][j]);
        }
    }
    
}
int main(){
    test();
}