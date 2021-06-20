#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ex01_f1(int n[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d", n[i]);
}
void ex01_f2(int *n, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d", *(n + i));
}
void ex01()
{
    int nums[5] = {5, 4, 3, 2, 1};
    ex01_f1(nums, 5);
    puts("");
    ex01_f2(nums, 5);
    puts("");
}
void ex02_f1(int (*n)[5], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sizeof(n[0]) / sizeof(int); j++)
            printf("%d", *(*(n + i) + j));
        puts("");
    }
}
void ex02()
{
    int nums[2][5] = {5, 4, 3, 2, 1, 1, 2, 3, 4, 5};
    ex02_f1(nums, sizeof(nums) / sizeof(nums[0]));
}
int mycmp(char *sa, char *sb)
{
    return strcmp(sa, sb);
}
void ex03()
{
    char stra[] = "apple";
    char strb[] = "apple";
    if (mycmp(stra, strb))
        printf("false");
    else
        printf("true");
}
int mycmp_2(char (*s)[10], int size)
{

    printf("%s\n", s[0]);
    printf("%s\n", s[1]);
    return strcmp(*(s + 0), *(s + 1));
}
void ex04()
{
    char str[2][10] = {"apple", "apple"};
    if (mycmp_2(str, sizeof(str) / sizeof(str[0])))
        printf("false");
    else
        printf("true");
}

// int main(int argc, char *argv[])
// {
//     int x, y;
//     char op;

//     if (argc != 4)
//     {
//         printf("calculating...\n");
//         printf("enter likes 3 + 4\n");
//         exit(0);
//     }
//     x = atof(argv[1]);
//     op = *argv[2];
//     y = atoi(argv[3]);

//     switch (op)
//     {
//     case '+':
//         printf("%d %c %d=%d\n", x, op, y, x + y);
//         break;
//     case '-':
//         printf("%d %c %d=%d\n", x, op, y, x + y);
//         break;
//     case '*':
//         printf("%d %c %d=%d\n", x, op, y, x + y);
//         break;
//     case '/':
//         printf("%d %c %d=%d\n", x, op, y, x + y);
//         break;
//     default:
//         printf("failed caculation\n");
//     }
//     return 0;
// }
double avg(double *n, int size){
    double sum=0;
    for(int i = 0;i<size;i++)sum+=*(n+i);
    return sum/size;
}
int main(int argc,char *argv[]){
    double avg_value,num[5];
    for(int i=0;i<argc-1;i++){
        num[i]=atof(argv[i+1]);
        printf("%lf\n",num[i]);
    }
    avg_value=avg(num,sizeof(num)/sizeof(double));
    printf("avg=%lf\n",avg_value);
    return 0;
}