package week05;
import java.util.*;
public class WriteBinary {
    private int bin=0;
    public void writeBinary(int n) {
        if(n!=0){
            writeBinary(n/2);
            System.out.printf("%d",n%2);
        }
    }
    public static void main(String args[]){
        Scanner scan= new Scanner(System.in);
        WriteBinary wr= new WriteBinary();
        int key=scan.nextInt();
        wr.writeBinary(key);  
    }
}