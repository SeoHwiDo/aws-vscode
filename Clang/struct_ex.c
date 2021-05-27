#include<stdio.h>
#include<time.h>
void struct_ex01(){
    typedef struct{
        char role[20];
        char position[4];
    }lol_info;
    
    struct lol_champ{
        char name[14];
        int number;
        lol_info info;
        struct lol_champ *self_c;
    }champ[3], *c, *sc;
    c=champ;
    ;
    for(int i=0;i<3;i++){
        printf("name:");
        gets((c+i)->name);
        printf("number:");
        scanf("%d",&(c+i)->number);
        while(getchar()!='\n');
        printf("role:");
        gets((c+i)->info.role);
        printf("position:");
        gets((c+i)->info.position);
        (c+i)->self_c=(c+i);
        printf("\n");
    }
    sc=c->self_c;   
    time_t now = time(NULL);
    struct tm *today;
    today = localtime(&now);
    int year = today->tm_year+1900;
    int month = today->tm_mon+1;
    int day = today->tm_mday;
    for(int i=0;i<3;i++){
        
    printf("champ- %d-%d-%d name:%s number:%d role:%s pos:%s\n",year,month,day,(c+i)->name,(c+i)->number,(c+i)->info.role,(c+i)->info.position);
    printf("self-c-%d-%d-%d name:%s number:%d role:%s pos:%s\n",year,month,day,(sc+i)->name,(sc+i)->number,(sc+i)->info.role,(sc+i)->info.position);
    }
}
int main(){
    struct_ex01();
}