package week04;
import java.util.*;
public class Fraction{
    public int num;
    public int denum;
    public Fraction(int n, int d){
        this.num=n;
        this.denum=d;
    }
    public String toString(){
        return this.num+"/"+this.denum;
    }
    public Fraction add(Fraction f){
        Fraction r;
        int d=this.denum*f.denum;
        int n=this.num*f.denum+f.num*this.denum;
        simply();
        r= new Fraction(n,d);
        return r;
    }
    public void simply(){
        int gcd=greatestCD(num,denum);
        this.num=num/gcd;
        this.denum=denum/gcd;
    }
	public int greatestCD(int n, int d) {
		int bigger=n,smaller=d,r=0;
        while(smaller!=0){
            r=bigger%smaller;
            bigger=smaller;
            smaller=r;
        }
        return bigger;
	} 
    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        int n1=scan.nextInt();
        int d1=scan.nextInt();
        Fraction fr1=new Fraction(n1,d1);
        int n2=scan.nextInt();
        int d2=scan.nextInt();
        Fraction fr2=new Fraction(n2,d2);
        System.out.println(fr1.add(fr2));       
    }
}