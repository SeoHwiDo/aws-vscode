package week05;
public class Factorial{
    public static long factorial_1(int n){
        long res=1;
        if (n==0) return 1L;
        for (int i=1;i<=n;i++){
            res=res*i;
        }
        return res;
    }
    public static long factorial_2(int n){
        if(n==0) return 1L;
        else{
            return n*factorial_2(n-1);
        }
    }
    public static void main(String args[]){
        System.out.println(factorial_1(5));
        System.out.println(factorial_2(5));
    }
}