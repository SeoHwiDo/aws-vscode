#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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