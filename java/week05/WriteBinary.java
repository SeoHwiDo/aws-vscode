package week05;
import java.util.*;
public class WriteBinary {
    private String bin;
    public String writeBinary(int n) {
        if (n == 0) {
            return bin;
        } else {
            bin+=(char)(n%2);
            n/=2;
            return writeBinary(n);
        }
    }
    public static void main(String args[]){
        Scanner scan= new Scanner(System.in);
        WriteBinary wr= new WriteBinary();
        int key=scan.nextInt();
        System.out.println(wr.writeBinary(key));
    }
}