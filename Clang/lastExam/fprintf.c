#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
struct unit{
    char fruit[10];
    int price;
};
typedef struct unit unit;
void ex01(int argc,char *argv[]){
   
    FILE *fp;
    unit list[SIZE] = {"apple",800,"banana",500,"orange",600,"peach",1000};

   fp = fopen(argv[1],"wb");
   if(fp==NULL){
       printf("error");
       exit(1);
   }
   fwrite(list,sizeof(list),1,fp); 
   fclose(fp);
}
void ex02(int argc,char *argv[]){
   
    FILE *fp;
    unit list[SIZE];

   fp = fopen(argv[1],"rb");
   if(fp==NULL){
       exit(1);
   }
    fread(list,sizeof(list),1,fp);
   for (int i = 0;i<SIZE;i++){
       fprintf(stdout,"%s %d\n",(list+i)->fruit,(list+i)->price);
   } 
   fclose(fp);
}
int main(int argc , char *argv[]){
    ex02(argc,argv);
    return 0;
}