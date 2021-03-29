import java.util.*;
public class Gugudan2{
    public static void main(String args[]){
        for(int i=1;i<=9;i++){
            System.out.printf("-----%1$d단-----\n",i);
               for(int j=1;j<=9;j++){
            System.out.printf("%1$d * %2$d = %3$d\n",i,j,j*i);    
            }
            System.out.println();
        }
           }        
}