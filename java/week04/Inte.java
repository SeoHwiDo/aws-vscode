package week04;

public class Inte {
    int i;
    public Inte(int a){
        this.i=a;
    }
    public static void swap1(Inte x, Inte y) {
        Inte temp = x;
        x = y;
        y = temp;
    }
    public static void swap2(int x, int y) {
        int temp = x;
        x = y;
        y = temp;
    }
    public static void main(String args[]) {
        int a = 10;
        int b = 20;
        Inte aa = new Inte(a);
        Inte bb = new Inte(b);
        swap1(aa, bb);
        System.out.println("a="+a+"b="+b);
        swap2(a, b);
        System.out.println("a="+a+"b="+b);

        
    }
}