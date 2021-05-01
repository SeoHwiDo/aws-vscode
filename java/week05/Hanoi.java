package week05;

public class Hanoi {
    public static void move(int n,char A,char B,char C){
        if(n==1){
            System.out.println(n+":"+A+"->"+C);    
        }else{
            move(n-1,A,C,B);
            System.out.println(n+":"+A+"->"+C);
            move(n-1,B,A,C);
        }
    }
    public static void main(String args[]){
        move(3,'A','B','C');

    }
    
}