#include <stdio.h>
//#include<conio.h>

void ex01()
{
    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98};
    double target[sizeof(source) / sizeof(double)];
    double *p;

    p = source;

    for (int i = 0; i < sizeof(source) / sizeof(double); i++)
        target[i] = *(p + i);
    printf("source=");
    for (int i = 0; i < sizeof(source) / sizeof(double); i++)
        printf("%.2lf ", source[i]);
    printf("\ntarget=");
    for (int i = 0; i < sizeof(source) / sizeof(double); i++)
        printf("%.2lf ", target[i]);
}
void ex02()
{
    double num[5], sum, *p;
    p = num;
    for (int i = 0; i < sizeof(num) / sizeof(double); i++)
    {
        printf("enter number:");
        scanf("%lf", p + i);
    }
    for (int i = 0; i < sizeof(num) / sizeof(double); i++)
    {
        sum += *(p + i);
    }
    printf("avg=%lf", sum / (sizeof(num) / sizeof(double)));
}
void ex03()
{
    int num[] = {5, 7, 22, 53, 88, 71, 101}, *p;
    int deno, input, count = 0;
    p = num;
    printf("배열은 ");
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        printf("%5d", *(p + i));
    }
    printf("\n소수는 ");
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        for (deno = 2; (*(p + i) % deno) != 0; deno++)
            ;
        if (deno == *(p + i))
        {
            printf("%5d", *(p + i));
        }
    }
}
void ex04()
{
    char ch;
    int fre[10] = {0}, *p;
    p = fre;

    printf("if not number, end program\nenter number for 0 to 9");
    do
    {
        //ch=getche();
        if (ch < '0' || ch > '9')
            break;
        p[ch - '0']++;
    } while (1);
    for (int i = 0; i < 10; i++)
    {
        if (*(p + i))
            printf("\n %d is %d enter", i, *(p + i));
    }
}
void ex05()
{
    char str[30], *p;
    int i;
    while (1)
    {
        p = str;
        printf("\nenter String : ");
        gets(p);
        if (*p == '\n')
            break;
    }
    for (i = 0; *p; i++, p++);
    printf("String's length:%d", i);
}
void ex06()
{
    char stra[30], strb[30], *sa, *sb;

    sa = stra;
    sb = strb;

    printf("\nenter String : ");
    gets(sa);

    while (*sa)
    {
        *sb = *sa;
        sa++;
        sb++;
    }
    *sb = '\0';
    printf("copy String : %s", strb);
}
void ex07(){
    int num[][5]={9,8,7,6,5,4,3,2,1};
    int(*pn)[5];
    char strs[][10]={"red","green","yellow"};
    char(*ps)[10];

    pn = num;
    ps = strs;

    printf("pn[0][0]=%d, *((pn[0])+0)=%d,*(*(pn+0)+0)=%d\n",
            pn[0][0],*((pn[0])+0),*(*(pn+0)+0));

    for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
        for(int j=0;j<sizeof(num[0])/sizeof(int);j++){
            printf("%3d",*(*(pn+i)+j));
        }
    }
    puts("");
    for (int i = 0; i< sizeof(strs)/sizeof(strs[0]);i++){
        printf("%10s",*(ps+i));
    }
}
void ex08(){
    float fa=1.1,fb=2.2,fc=3.3;
    float *pf[3]={&fa,&fb,&fc};

    printf("*pf[0]=%.2f,*(*(pf+1))=%.2f,*(*(pf+2))=%.2f\n",*pf[0],*(*(pf+1)),*(*(pf+2)));

    for (int i=0;i<3;i++){
        printf("enter RealNum : ");
        scanf("%f",pf[i]);
    }
    printf("fa=%.2f,fb=%.2f,fc=%.2f",fa,fb,fc);
}
void ex09(){
    char a[3][6] = {"red","green","yellow"};
    char *b[] = {"red","green","yellow"};
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)printf("a[%d]=%s, ",i,a[i]);
    puts("");
    for(int i=0;i<size;i++)printf("b[%d]=%s, ",i,b[i]);
    puts("");
    for(int i=0;i<size;i++)printf("*(b+%d)=%s, ",i,*(b+i));
}
void ex10(){
    int *ptr1, **ptr2;
    int num=300;

    ptr1=&num;
    ptr2=&ptr1;

    printf("num=%d,ptr1=%d,ptr2=%d",num,*ptr1,**ptr2);
}
int main(void)
{
    // ex01();
    // ex02();
    // ex03();
    // ex04();
    // ex05();
    // ex06();
    // ex07();
    // ex08();
    // ex09();
    // ex10();
    return 0;
}