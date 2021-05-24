
/*

다음의 그림과 같이 우주선을 도착위치에 안전하게 착륙시키는 프로그램을 작성하시오

*/

#include <stdio.h>

#include <time.h>

#include <stdlib.h>

#include <conio.h>

#include <Windows.h>

 

void intro_game(void);

void gotoxy(int x, int y);

int print_platform(void);

void print_spaceship(int x, int y);

void delete_spaceship(int x, int y);

void move_arrow_key(char key, int *x1, int x_b);

void game_control(int x);

int move_down(int x);

 

int spaceship[3][3] = { 0, 1, 0, 1, 1, 1, 1, 0, 1 }; //우주선

int platform[3] = { 1, 1, 1 }; //착륙 지점

 

int main(void)

{

        int x;

        do

        {

               x = rand() % 30;

        } while (x % 2 == 0);

        srand((unsigned)time(NULL));

        intro_game();

        game_control(x);

        gotoxy(1, 25);

        return 0;

}

 

void gotoxy(int x, int y)

{

        COORD Pos = { x - 1, y - 1 };

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

 

/*

게임에 대한 설명을 출력하는 함수 intro_game

*/

void intro_game(void)

{

        printf("우주선 착륙\n\n");

        printf("우주선을 해당 위치에 착륙시키는 게임입니다.\n\n");

        printf("우주선은 화면 위에 위치하는데\n");

        printf("화살표키를 이용하여 착륙지점에\n");

        printf("정확히 착륙시켜야 합니다.\n\n");

        printf("우주선 모양\t착륙위치\n");

        printf("  □       \t□□□\n");

        printf("□□□\n");

        printf("□  □\n\n");

        printf("아무키나 누르면 시작합니다.\n");

        getch();

        system("cls");

}

 

/*

착륙지점 랜덤으로 출력

*/

int print_platform(void)

{

        int number;

        do

        {

               number = rand() % 30;

        } while (number % 2 == 0); //홀수여야한다

        gotoxy(number, 23);

        for (int i = 0; i < 3; i++)

               if (platform[i])

                       printf("□");

        return number;

}

 

/*

우주선 출력

*/

void print_spaceship(int x, int y)

{

        int count = 1;

        for (int i = 0; i < 3; i++)

        {

               for (int j = 0; j < 3; j++)

               {

                       if (spaceship[i][j])

                              printf("□");

                       else

                              printf("  ");

               }

               gotoxy(x, y + count++);

        }

}

 

/*

움직일 때 잔상 삭제

*/

void delete_spaceship(int x, int y)

{

        int count = 1;

        gotoxy(x, y);

        for (int i = 0; i < 3; i++)

        {

               for (int j = 0; j < 3; j++)

               {

                       printf("  ");

               }

               gotoxy(x, y + count++);

        }

}

 

/*

화살표 키를 이용한 문자의 이동 함수 move_arrow_key

*/

void move_arrow_key(char key, int *x1, int x_b)

{

        switch (key)

        {

        case 75:

               *x1 = *x1 - 2;

               if (*x1 < 1)

                       *x1 = 1;

               break;

        case 77:

               *x1 = *x1 + 2;

               if (*x1 > x_b)

                       *x1 = x_b;

               break;

        default:

               return;

        }

}

 

/*

우주선을 바닥으로 이동시키는 함수 move_down

*/

int move_down(int x)

{

        int y;

        char key;

        for (y = 1; y < 20; y++)

        {

               gotoxy(x, y);

               print_spaceship(x, y);

               Sleep(100);

               delete_spaceship(x, y);

               Sleep(50);

               if (kbhit())

               {

                       key = getch();

                       move_arrow_key(key, &x, 30);

               }

        }

        gotoxy(x, y);

        print_spaceship(x, y);

        return x;

}

 

/*

게임 승패 관리

*/

void game_control(int x)

{

        int result = print_platform(); //플랫폼 맨 왼쪽 x 값

        int sResult = move_down(x); //우주선 맨 왼쪽 x 값

        if (sResult == result)

        {

               gotoxy(1, 24);

               printf("착륙에 성공하셨습니다");

        }

        else if (sResult + 2 == result || sResult + 4 == result || sResult - 2 == result || sResult - 4 == result) //걸친경우

        {

               gotoxy(1, 24);

               printf("아쉽게도 완벽한 착륙에는 성공하지 못했습니다");

        }

        else

        {

               gotoxy(1, 24);

               printf("착륙에 실패하셨습니다");

        }

 

}

d
