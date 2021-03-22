import java.util.*;
public class find {
    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        int stores[]=new int[100];
        int size=0;
        int sc=scan.nextInt();
        while(sc>-1){
            stores[size]=sc;
            size++;
            sc=scan.nextInt();
        }
        for(int i=0;i<size-1;i++){
            int max=stores[i];
            for(int j=i+1;j<size;j++){
                if(stores[j]>max){
                    max=stores[j];
                    stores[j]=stores[i];
                    stores[i]=max;
                }
            }
        }
        for(int i=0;i<size;i++){
            System.out.println(stores[i]);
        }
    }
}