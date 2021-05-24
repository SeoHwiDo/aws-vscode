#include <stdio.h>
char mystrcat(char *stra,char *strb,char *plus){
    while(*stra){
        *plus=*stra;
        plus++;
        stra++;
    }
    while(*strb){
        *plus=*strb;
        plus++;
        strb++;
    }
        *plus='\0';
}
int main(int argc ,char *argv[]){
    char *stra=argv[1],*strb=argv[2],plus[50];
    mystrcat(stra,strb,plus);
    printf("20205188 서휘도\nplus=%s",plus);
    return 0; 
}