#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void ex01()
{
    struct neighbor
    {
        char name[13];
        int age;
        char phone[13];
    } his = {"a", 1, "010-0000-0001"};
    printf("name=%s age=%d phone=%s\n", his.name, his.age, his.phone);
}
void ex02()
{
    struct neighbor
    {
        char name[13];
        int age;
        char phone[13];
    };
    struct neighbor his = {"b", 2, "010-0000-0002"};
    printf("name=%s age=%d phone=%s\n", his.name, his.age, his.phone);
}
void ex03()
{
    struct neighbor
    {
        char name[13];
        int age;
        char phone[13];
    };
    typedef struct neighbor neighbor;
    neighbor his = {"b", 3, "010-0000-0003"};
    printf("name=%s age=%d phone=%s\n", his.name, his.age, his.phone);
}
void ex04()
{
    typedef struct
    {
        char name[13];
        int age;
        char phone[13];
    } neighbor;
    neighbor his = {"b", 4, "010-0000-0004"};
    printf("name=%s age=%d phone=%s\n", his.name, his.age, his.phone);
}
struct neighbor
{
    char name[13];
    int age;
    char phone[13];
};
typedef struct neighbor neighbor;
void ex05()
{
    neighbor her,our[3],*h,*o;
    h=&her;
    o=our;
    int temp;
    for(int i = 0;i<sizeof(our)/sizeof(our[0]);i++){
        printf("enter name:");
        gets((*(o+i)).name);
        printf("enter age:");
        scanf("%d",&(*(o+i)).age);
        printf("enter phone:");
        while(getchar()!='\n');
        gets((*(o+i)).phone);
        printf("name=%s age=%d phone=%s\n", (*(o+i)).name, (*(o+i)).age, (*(o+i)).phone);
    } 
}
neighbor find(neighbor *data,int size, char *n){
    neighbor tmp = {"NULL",0,"NULL"};
    for (int i =0;i<size;i++){
        if(!strcmp((data+i)->name,n))return (data[i]);
    }
    return tmp;
}
void ex06(){
    char name[13];
    neighbor who;
    neighbor our[SIZE]={
        {"aaa",11,"010-1111-1111"},
        {"bbb",22,"010-2222-2222"},
        {"ccc",33,"010-3333-3333"}
    };
    printf("if enter name, find info\n");
    printf("enter name:");
    gets(name);
    who = find(our,SIZE,name);
    if(!strcmp(who.name,"NULL"))printf(" =>not include info\n");
    else printf(" =>%s,%d old, %s\n",who.name,who.age,who.phone);
}
int main()
{
    ex06();
}