package week05;

public class Hanoi {
    public static void move(int n,char orig,char temp,char dest){
        if(n==1){
            System.out.println(n+":"+orig+"->"+dest);    
        }else{
            move(n-1,orig,dest,temp);
            System.out.println(n+":"+orig+"->"+dest);
            move(n-1,temp,orig,dest);
        }
    }
    public static void main(String args[]){
        move(3,'A','B','C');

    }
    
}