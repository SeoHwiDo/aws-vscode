#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoXY(int x, int y){
    COORD pos;
    pos.X=x;
    pos.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main(){
    int i;
    int x=9;
    int y=2;

    gotoXY(x,y);
    printf("*");
    for(i =0;i<29;i++)
        printf("==");
    printf("*");

    for(i=1;i<22;i++){
        y++;
        gotoXY(x,y);
        printf("|");

        if(i==12){
            gotoXY(35,i);
            printf("~Hello~");
        }
        x+=60;
        gotoXY(x,y);
        printf("|");
        x=9;
    }
    gotoXY(x,y);
    printf("*");
    for(i =0;i<29;i++)
        printf("==");
    printf("*");
    _getch();
    return 0;
    
}