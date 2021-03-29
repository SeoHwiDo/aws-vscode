package week05;

import java.util.Scanner;
import java.util.*;
public class WriteBinary {
    
    public String inWriteBinary(int n) {
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
        int key=scan.nextInt();
        System.out.println(writeBinary(key));
    }
}