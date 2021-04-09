#include <stdio.h>
//#include <conio.h>
void week06_1(){
    int num[5];
    int len=sizeof(num)/sizeof(int);
    float sum=0.0;
    for(int i=0;i<len;i++){
        printf("?ˆ«?žë¥? ?ž…? ¥?•˜?„¸?š” :");
        scanf("%d",num+i);
        sum+=num[i];    
    }
    printf("?‰ê· ì?? = %f",sum/len);
}
void week06_2(){
    int j,num[]={5,7,22,53,88,71,101};
    int len=sizeof(num)/sizeof(int);
    printf("ë°°ì—´???  ");
    for(int i=0;i<len;i++) printf("%d  ",num[i]);
    printf("\n?†Œ?ˆ˜?Š”  ");
    for(int i=0;i<len;i++){
        for(j=2;num[i]%j!=0;j++);
        if(j==num[i]) printf("%d  ",num[i]);
    }
}
void week06_3(){
    char ch;
    int count[10]={0};
    printf("?ˆ«?žê°? ?•„?‹ˆë©? ë°˜ë³µ?´ ì¢…ë£Œ?©?‹ˆ?‹¤.\n0?—?„œ 9ê¹Œì???˜ ? •?ˆ˜ë¥? ?ž…? ¥?•˜?„¸?š”.");
    do{
        //ch=getche();
        if(ch<='0'||ch>='9') break;
        count[ch-'0']++;
    
    }while(1);
    for(int i=0;i<10;i++){
        if(count[i])printf("%d?Š” %d?šŒ ?ž…? ¥?•˜?…¨?Šµ?‹ˆ?‹¤.");
    }
}
void week06_4(){
    char str[30];
    int i;
    while(1){
        printf("ë¬¸ìž?—´ ?ž…? ¥:");
        fgets(str,30,stdin);
        if(str[0]=='\0') break;
        for(i=0;str[i];i++);
        printf("ë¬¸ìž?—´?˜ ê¸¸ì´?Š”=,%d,%d\n",i-1,i-1);
    }
}
void week06_hw(){
    printf("¼­ÈÖµµ 20205188\n");
    char str[2][30];
    int i;
    for(int i=0;i<2;i++){
        printf("¹®ÀÚ¿­ ÀÔ·Â:");
        gets(str[i]);
    }
    for(i=0;i<30;i++){
        int a=str[0][i],b=str[1][i];
        if(a!=b){
             printf("%s,%s,´Ù¸§",str[0],str[1]);
             break;            
        }else if(a==b&&a==0||b==0){
            printf("%s,%s,°°À½",str[0],str[1]);
            break;
        } 
               
    }
}

int main(){
    week06_hw();
    return 0;
}