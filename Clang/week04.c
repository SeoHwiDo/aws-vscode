#include<stdio.h>
int main(void){
    printf("���ֵ� 20205188\n");
    char x;
    int y=1;
    for(int i=0;i<2;i++){
        printf("���ڸ� �Է��ϼ���:");
        x=getchar();
        getchar();
        if(x>=48&&x<=58){
            x-=48;    
        }else{
            x=1;
        }
        y*=x;
    }
    printf("�� ���� ���� = %d",y);
    
}