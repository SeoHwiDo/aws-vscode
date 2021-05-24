
/*

������ �׸��� ���� ���ּ��� ������ġ�� �����ϰ� ������Ű�� ���α׷��� �ۼ��Ͻÿ�

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

 

int spaceship[3][3] = { 0, 1, 0, 1, 1, 1, 1, 0, 1 }; //���ּ�

int platform[3] = { 1, 1, 1 }; //���� ����

 

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

���ӿ� ���� ������ ����ϴ� �Լ� intro_game

*/

void intro_game(void)

{

        printf("���ּ� ����\n\n");

        printf("���ּ��� �ش� ��ġ�� ������Ű�� �����Դϴ�.\n\n");

        printf("���ּ��� ȭ�� ���� ��ġ�ϴµ�\n");

        printf("ȭ��ǥŰ�� �̿��Ͽ� ����������\n");

        printf("��Ȯ�� �������Ѿ� �մϴ�.\n\n");

        printf("���ּ� ���\t������ġ\n");

        printf("  ��       \t����\n");

        printf("����\n");

        printf("��  ��\n\n");

        printf("�ƹ�Ű�� ������ �����մϴ�.\n");

        getch();

        system("cls");

}

 

/*

�������� �������� ���

*/

int print_platform(void)

{

        int number;

        do

        {

               number = rand() % 30;

        } while (number % 2 == 0); //Ȧ�������Ѵ�

        gotoxy(number, 23);

        for (int i = 0; i < 3; i++)

               if (platform[i])

                       printf("��");

        return number;

}

 

/*

���ּ� ���

*/

void print_spaceship(int x, int y)

{

        int count = 1;

        for (int i = 0; i < 3; i++)

        {

               for (int j = 0; j < 3; j++)

               {

                       if (spaceship[i][j])

                              printf("��");

                       else

                              printf("  ");

               }

               gotoxy(x, y + count++);

        }

}

 

/*

������ �� �ܻ� ����

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

ȭ��ǥ Ű�� �̿��� ������ �̵� �Լ� move_arrow_key

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

���ּ��� �ٴ����� �̵���Ű�� �Լ� move_down

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

���� ���� ����

*/

void game_control(int x)

{

        int result = print_platform(); //�÷��� �� ���� x ��

        int sResult = move_down(x); //���ּ� �� ���� x ��

        if (sResult == result)

        {

               gotoxy(1, 24);

               printf("������ �����ϼ̽��ϴ�");

        }

        else if (sResult + 2 == result || sResult + 4 == result || sResult - 2 == result || sResult - 4 == result) //��ģ���

        {

               gotoxy(1, 24);

               printf("�ƽ��Ե� �Ϻ��� �������� �������� ���߽��ϴ�");

        }

        else

        {

               gotoxy(1, 24);

               printf("������ �����ϼ̽��ϴ�");

        }

 

}

d
