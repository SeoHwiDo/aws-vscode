package week05;
import java.util.*;
public class Fibo{
	public static long fibo(int n) {
		if (n <= 1) return n;
        else return fibo(n-2) + fibo(n-1);
	}
    public static void main(String args[]) {
		Scanner scan= new Scanner(System.in);
        int input = scan.nextInt(); 
		System.out.println(fibo(input));
	}
	

}