#include<stdio.h>
void number(){
    int number=88;
    printf("8진=%o\n",number);
    printf("10진=%d\n",number);
    printf("16진=%x\n",number);
    printf("문자형=%c\n",number);

}
void scan(){
    int age;
    printf("당신의 나이를 입력하세요\n");
    scanf("%d",&age);
    printf("당신의 나이는 %d 입니다.",age);
}
void blink(){
    while(1){
        printf("---------\r");
        printf("=========\r");
    }
}
void get_ch(){
    printf("input one letter:");
    char ch=getchar();
    putchar(ch);
    printf("\n");

}
void get_str(){
    char name[20];
    printf("input your name:");
    gets(name);
    puts(name);
}
void ex_if(){
    int num;
    printf("input unsigned number:\n");
    scanf("%d",&num);
    if(num%2)printf("this number is odd"); 
    else printf("this number is even");
}
void bubble_sort(int arr[],int count){
    int temp;
    for(int i=0;i<count;i++){
        for(int j=0;j<count-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    for(int j=0;j<10;j++)printf("%d",arr[j]);
    printf("\n");    
    }
}
void ex_arr(){
    int numArr[10]={8,4,2,5,3,7,10,1,6,9};
    bubble_sort(numArr,sizeof(numArr)/sizeof(int));
    for(int i=0;i<10;i++)printf("%d",numArr[i]);
    printf("\n%d\n",sizeof(numArr));
    printf("%d\n",sizeof(numArr)/sizeof(int));
}
int main(){
    ex_arr();
    return 0;
}