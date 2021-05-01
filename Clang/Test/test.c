#include<stdio.h>
int main(){
    int i,j=0,k=0;
    char s1[100],s2[10][100];
    printf("정수 입력:");
    fgets(s1,100,stdin);

    for(i=0;s1[i];i++){
        if(s1[i]==' '){
            s2[j][k]='\0';
            j++;
            k=0;
            continue;
        }
        s2[j][k]=s1[i];
        k++;
    }
    for(int a=0;s2[a][0];a++){
        printf("%d,%s\n",a,s2[a]);
    }
}