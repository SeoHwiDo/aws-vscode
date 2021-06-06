#include<stdio.h>
#include<time.h>
typedef struct{
    int year;
    int month;
    int day;
}date;
typedef struct{
    char name[15];
    int price;
    date expire;
    char throw; 
}fruit;
int main(){
    time_t now = time(NULL);
    struct tm *today;
    today = localtime(&now);
    int cYear = today->tm_year+1900;
    int cMonth = today->tm_mon+1;
    int cDay = today->tm_mday;
    int sum=0;
    fruit any[5]={
        "apple", 500, 2020, 9, 1, 'n',
        "banana",500, 2020, 7, 3, 'n',
        "orange",500, 2020, 8, 1, 'n',
        "melon", 500, 2020, 11,11,'n',
        "mango", 500, 2020, 12,25,'n'
    }, *a;
    a=any;   
    for(int i = 0;i<sizeof(any)/sizeof(any[5]);i++){
        if((a+i)->expire.year<cYear)(a+i)->throw='y';
        else if ((a+i)->expire.year==cYear){
            if((a+i)->expire.month<cMonth)(a+i)->throw='y';
            else if ((a+i)->expire.month==cMonth){
                if((a+i)->expire.day<cDay)(a+i)->throw='y';
                else if ((a+i)->expire.day==cDay)(a+i)->throw='y';
            }
        }
        if((a+i)->throw=='y') sum+=(a+i)->price;
    }
    printf("서휘도 20205188\n");
    printf("오늘 날짜는 %d년 %d월 %d일 입니다.\n",cYear,cMonth,cDay);
    printf("폐기 되는 항목들의 총액은 %d원 입니다.",sum);
    

}