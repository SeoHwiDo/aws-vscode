#include <stdio.h>
//#include <conio.h>
void week06_1(){
    int num[5];
    int len=sizeof(num)/sizeof(int);
    float sum=0.0;
    for(int i=0;i<len;i++){
        printf("숫자를 입력하세요 :");
        scanf("%d",num+i);
        sum+=num[i];    
    }
    printf("평균은 = %f",sum/len);
}
void week06_2(){
    int j,num[]={5,7,22,53,88,71,101};
    int len=sizeof(num)/sizeof(int);
    printf("배열은  ");
    for(int i=0;i<len;i++) printf("%d  ",num[i]);
    printf("\n소수는  ");
    for(int i=0;i<len;i++){
        for(j=2;num[i]%j!=0;j++);
        if(j==num[i]) printf("%d  ",num[i]);
    }
}
void week06_3(){
    char ch;
    int count[10]={0};
    printf("숫자가 아니면 반복이 종료됩니다.\n0에서 9까지의 정수를 입력하세요.");
    do{
        //ch=getche();
        if(ch<='0'||ch>='9') break;
        count[ch-'0']++;
    
    }while(1);
    for(int i=0;i<10;i++){
        if(count[i])printf("%d는 %d회 입력하셨습니다.");
    }
}
void week06_4(){
    char str[30];
    int i;
    while(1){
        printf("문자열 입력:");
        fgets(str,30,stdin);
        if(str[0]=='\0') break;
        for(i=0;str[i];i++);
        printf("문자열의 길이는=,%d,%d\n",i-1,i-1);
    }
}
void week06_hw(){
    char str[2][30];
    int i,flag=0;
    for(int i=0;i<2;i++){
        printf("문자열 입력:");
        fgets(str[i],30,stdin);
    }
    for(i=0;i<30;i++){
        flag= str[0][i]!=str[1][i] ? 1:0;       
    }flag ? printf("%s,%s,다름",str[0],str[1]):printf("%s,%s,같음",str[0],str[1]);
} 
int main(){
    week06_4();
    return 0;
}