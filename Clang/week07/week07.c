#include<stdio.h>
#include<conio.h>
void ex_01(){
    char str[4];
    for(int i=0;i<4;i++){
        printf("ë¬¸ìž ?ž…? ¥:");
        str[i]=getche();
    }
    printf("?ž…? ¥ë°›ì?? ë¬¸ìž=%s",str);
}
void ex_04(){
    char str[30];
    while(1){
        int count=0;
        printf("?‡¾ëª„ì˜„ï¿½ë¿´ ï¿½ì—¯ï¿½ì °:");
        fgets(str,30,stdin);
        if(str[0]=='\n')break;
        for(int i=0;str[i]!='\n';i++)count++;
        printf("?‡¾ëª„ì˜„ï¿½ë¿´ æ¹²ëª„?” :%d",count);
    }
    
}

void ex_05(){
    char str[30];
    char ch;
    while(1){
        int count=0;
        printf("?‡¾ëª„ì˜„ï¿½ë¿´ ï¿½ì—¯ï¿½ì °:");
        fgets(str,30,stdin);
        printf("?‡¾ëª„ì˜„ ï¿½ì—¯ï¿½ì °:");
        ch=getchar();
        while (getchar()!='\n');
        if(str[0]=='\n')break;
        for(int i=0;str[i]!='\n';i++)if(str[i]==ch)count++;
        printf("%sï¿½ë¿‰ï¿½ê½Œ %cï¿½ë’—%dåª›ï¿½",str,ch,count);
    }
}
void ex_09(){
    int form[4],sum=0,min=2147483647,max=-2147483648;    
    for(int i=0;i<4;i++){
        printf("ï¿½ì ™ï¿½ë‹”ï¿½ì—¯ï¿½ì °:");
        scanf("%d",form+i);
        sum+=form[i];
        if(form[i]>max)max=form[i];
        if(form[i]<min)min=form[i];
    }
    printf("ï¿½ë??:%d\nåª›ï¿½ï¿½ì˜£ ï¿½ê²™ ï¿½ë‹”:%d\nåª›ï¿½ï¿½ì˜£ ï¿½ì˜‰ï¿½ï¿½ï¿? ï¿½ë‹”:%d",sum,max,min);
    
}

void ex_10(){
    char a[10];
    int i,b;
    printf("Á¤¼ö ÀÔ·Â:");
    scanf("%d",&b);
    for(i=0;b!=1;i++){
        a[i]=b%2+'0';
        b/=2;
    }
    while(1){
        i++;
        if(a[i]=='\0')break;
    }
    for(;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("%s",a);
}
int main(){
    ex_10();
}